#include <stdio.h>
#include "soma.c"

int main() {
    int num1, num2, resultado;

    printf("Digite o 1º número: ");
    scanf("%d", &num1);

    printf("Digite o 2º número: ");
    scanf("%d", &num2);

    // Chama a sub-rotina
    resultado = somaEntre(num1, num2);

    printf("Soma = %d\n", resultado);

    printf("\nMicael Jeferson Junco\n");

    return 0;
}
