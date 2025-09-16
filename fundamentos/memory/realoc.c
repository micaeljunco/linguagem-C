#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr1, *ptr2, size;

    // Aloca memória parqa 4 inteiros
    size = 4 * sizeof(*ptr1);       // 4 * tamanho do tipo do ponteiro (4, ja que é inteiro)
    ptr1 = malloc(size);            // aloca

    printf("%d bytes alocados em %p \n", size, ptr1);

    // Aumenta a memória pra armazenar 6 inteiros
    size = 6 * sizeof(*ptr1);
    ptr2 = realloc(ptr1, size);     // Tenta aumentar a memoria e retornar o mesmo endereço
    // Caso não consiga, retorna outro endereço mas com mais memória agora alocada em outro lugar

    if (ptr2 == NULL) {
      // If realocar falhar (muito raro)
      printf("Falha: Não foi possível realocar a memória.\n");
    } else {
        printf("%d bytes realocados em %p \n", size, ptr2);
    }

    // Libera a memória alocada
    free(ptr1);

    return 0;
}
