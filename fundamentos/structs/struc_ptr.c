#include <stdio.h>

struct Carro {
    char marca[30];
    int ano;
};

int main() {
    struct Carro carro = {"Toyota", 2020};

    // Declara um ponteiro para a struct
    struct Carro *cptr = &carro;

    // Acessa os membros usando ->
    printf("Marca: %s\n", cptr->marca);
    printf("Ano: %d\n", cptr->ano);

    return 0;
}
