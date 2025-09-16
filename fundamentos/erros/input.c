#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int num;
    char name[50];

    do {
        printf("Digite um número entre 1 e 10:");
        scanf("%d", &num);
        while (getchar() != '\n');      // Limpa os caracteres que sobram no buffer
    } while(num <= 1 || num >= 10);

    do {
        printf("Digite um nome:");
        fgets(name, 50, stdin);
        name[strcspn(name, "\n")] = 0;  // Se livra do \n (enter)
    } while(strlen(name) == 0);

    printf("Você digitou: %d\n", num);
    printf("Você digitou: %s\n", name);

    exit(EXIT_SUCCESS);
}
