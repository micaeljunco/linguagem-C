#include <stdio.h>

struct Carro {
    char marca[30];
    int ano;
};

void atualizarAnoCarro(struct Carro *car);

int main() {
    struct Carro carro = {"Toyota", 2020};

    // Declara um ponteiro para a struct
    struct Carro *cptr = &carro;
    atualizarAnoCarro(cptr);    // Ou &carro

    // Acessa os membros usando ->
    printf("Marca: %s\n", cptr->marca);
    printf("Ano: %d\n", cptr->ano);

    return 0;
}

// Usa um ponteiro (*car)
void atualizarAnoCarro(struct Carro *car) {
    car->ano = 2025;
};
