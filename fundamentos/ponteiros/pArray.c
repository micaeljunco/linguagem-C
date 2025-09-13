#include <stdio.h>

int main () {
    int nums[4] = {25, 50, 75, 100};

    int i;

    printf("Endereços de memória de cada valor do vetor:\n");

    for (i = 0; i < 4; i++) {
      printf("%p\n", &nums[i]);
    }

    printf("\nAcessando valores dos elementos através do operador \"*\":\n");

    for (i = 0; i < 4; i++) {
        nums[i] = *(nums+i)+5;
    }

    for (i = 0; i < 4; i++) {
      printf("%d\n", *(nums+i));
    }
    return 0;
}
