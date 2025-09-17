#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>
#include <unistd.h>

// Define as funções (boa prática)
int file_process(DIR *dirp);
void progress_bar(int perc, int still);

int main() {
    struct dirent *de;
    // Define um ponteiro para struct dirent
    // Essa struct guarda informações sobre uma entrada de diretório (arquivo, pasta, link, etc).
    // Cada vez que chamarmos readdir(), ele vai apontar pro próximo item encontrado.

    DIR* dirp = opendir("./junk");
    // Abre o diretório com besteira
    // Retorna um ponteiro do tipo DIR*, que representa o diretório aberto.
    // Se não conseguir abrir o diretório, retorna NULL.

    // Caso o ponteiro seja NULL, exibe o erro na tela e sai com EXIT_FAILURE
    if (dirp == NULL) {
        perror("Um erro ocorreu ao tentar abrir o diretório \"./junk\"");
        exit(EXIT_FAILURE);
    }

    // Passa o diretório para a função de processamento de arquivos
    file_process(dirp);
    // Fecha o diretório (boa prática)
    closedir(dirp);

    return EXIT_SUCCESS;
}

int file_process(DIR *dirp){
    struct dirent* de;
    int n_f = 0;
    // Lê entrada por entrada do diretório e atribui à struct
    while ((de = readdir(dirp)) != NULL) {
        if (de->d_name[0] == '.') continue; // Pula o que começar com "."
        n_f++;
    }

    int f_i;
    // Itera pela quantidade de entradas do diretório
    for (f_i = 1; f_i <= n_f; f_i++) {

        // Faz o calculo da porcentagem e de quanto ainda falta para 100%
        int perc = (int)((f_i / (double)n_f) * 100.0);
        int still = 100 - perc;

        progress_bar(perc, still);
        usleep(1000);
    }
    printf("\n");

    return 0;
}

void progress_bar(int perc, int still){
    const char prog_char = '$';
    const char still_char = '/';

    // Define o tamanho da barra para ser reduzido e se encaixar melhor no terminal
    int n_perc = (int) (perc/1.6);
    int n_still = (int) (still/1.6);

    // Caso o cálculo dê negativo, atribui 0
    if (n_perc < 0) n_perc = 0;
    if (n_still < 0) n_still = 0;

    // Cria uma string vazia com capacidade definida pelos calculos anteriores
    // o +1 serve para armazenar o terminador "\0"
    char *perc_blocks = malloc(n_perc+1);
    char *still_blocks = malloc(n_still+1);

    // Preenche as strings com caracteres e adiciona o terminador
    for (int i = 0; i < n_perc; i++) {
        perc_blocks[i] = prog_char;
    }
    perc_blocks[n_perc] = '\0';

    for (int i = 0; i < n_still; i++) {
        still_blocks[i] = still_char;
    }
    still_blocks[n_still] = '\0';

    // Exibe a barra de progressio.
    printf("(%d/100%)[\033[36m%s\033[0m%s]\r",perc, perc_blocks, still_blocks);

    free(perc_blocks);
    free(still_blocks);
}
