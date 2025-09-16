#include <stdio.h>
#include <stdlib.h>

int main() {
    int *pArray;
    pArray = calloc(3, sizeof(*pArray));

    // Escrevendo na memória
    pArray[0] = 12;
    pArray[1] = 4;
    pArray[2] = 8;

    printf("%d, %d, %d\n", pArray[0], pArray[1], pArray[2]);

    int *ptr1 = malloc(4);      // Reserva 4 bytes
    char *ptr2 = (char*) ptr1;  // Aponta pros mesmos 4 bytes mas enxergando-os como caracteres
    ptr1[0] = 1684234849;       // valor que corresponde a hexadecimais a, b, c, d
    printf("%d é %c %c %c %c\n", *ptr1, ptr2[0], ptr2[1], ptr2[2], ptr2[3]);
}
