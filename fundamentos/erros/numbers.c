#include <stdio.h>
#include <stdlib.h>

int main() {
    int num;
    char input[100];

    printf("Digite um número: ");
    // Continua lendo até o usuário digitar algo valido (para só se retornar NULL)
    while (fgets(input, sizeof(input), stdin)) {
        // Verifica se consegue jogar o que está dentro de input
        // e inserir na variável num:
        if (sscanf(input, "%d", &num) == 1) {
            break;
        } else {
            printf("Não é um número, tente novamente: ");
        }

    }
    printf("Você digitou: %d\n", num);
    exit(EXIT_SUCCESS);
}
