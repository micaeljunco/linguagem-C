#include <stdio.h>
#include "verifica.c"

int main() {
    int numero, resultado;

    printf("Digite um número: ");
    scanf("%d", &numero);

    resultado = verificarNumero(numero);

    if (resultado == 1)
        printf("Número positivo\n");
    else
        printf("Número negativo\n");

    printf("\nMicael Jeferson Junco\n");

    return 0;
}
