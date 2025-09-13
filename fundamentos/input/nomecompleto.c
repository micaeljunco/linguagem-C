#include <stdio.h>

int main() {
    // Como por limitação do scanf não conseguir obter multiplas palavras, - pois ele considera espaços em branco como terminadores,
    // costumamos usar "fgets()" para ler uma linha de texto
    // Poderíamos usar gets(), mas é mais limitado.
    char nomeCompleto[40];
    printf("Escreva seu nome completo:\n");
    fgets(&nomeCompleto[0], sizeof(nomeCompleto), stdin);       // além de stdin, poderiamos usar um arquivo
    printf("Seu nome é: %s\n", nomeCompleto);
}
