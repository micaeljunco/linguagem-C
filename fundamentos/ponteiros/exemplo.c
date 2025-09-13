#include <stdio.h>

int main () {
    int idade = 16;
    int *pIdade = &idade;

    printf("Endereço na memória da varável: %p\n", pIdade);
    printf("Conteúdo de %p                : %d\n", pIdade, *pIdade);
    return 0;
}
