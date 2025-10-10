#include <stdio.h>
#include "avaliar.c"

int main() {
    int a, b, c, d;

    printf("Digite o 1º número: ");
    scanf("%d", &a);

    printf("Digite o 2º número: ");
    scanf("%d", &b);

    printf("Digite o 3º número: ");
    scanf("%d", &c);

    printf("Digite o 4º número: ");
    scanf("%d", &d);

    // Chama a sub-rotina
    avaliarNumeros(a, b, c, d);

    printf("\nMicael Jeferson Junco\n");

    return 0;

}
