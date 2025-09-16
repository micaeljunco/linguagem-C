#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;
    ptr = malloc(sizeof(*ptr)); // Aloca memoria para um inteiro

    // Se a memória não pôde ser allocada, encerra o programa
    if (ptr == NULL) {
      printf("Não foi possível alocar memória.\n");
      return 1;  // Encerra com código de erro
    }

    // Atribui valor ao inteiro
    *ptr = 20;

    printf("Inteiro vale: %d\n", *ptr);

    // Libera a memória alocada
    free(ptr);

    // O atribui como NULL para não ser usada acidentalmente no programa
    ptr = NULL;

    return 0;
}
