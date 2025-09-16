#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Carro {
    char marca[50];
    int ano;
};

int main() {
    // atribui a um ponteiro um endereço na memoria com tamanho para a struct
    // Nota que aqui a memória é alocada sem inicialização, caso fosse
    // necessaria utiliza-se calloc
    struct Carro *ptr = (struct Carro *) malloc(sizeof(struct Carro));

    // Checagem de falha e saída de erro
    if (ptr == NULL) {
        printf("Falha na alocação de memória.\n");
        return 1;
    }

    // Atribui a struct
    strcpy(ptr->marca, "Honda");
    ptr->ano = 2022;

    // -> acessa membros pelo ponteiro
    printf("Marca: %s\n", ptr->marca);
    printf("Ano: %d\n", ptr->ano);

    // Libera a memória e sobrecreve o ponteiro com NULL para evitar confusões
    free(ptr);
    ptr = NULL;

    // Array de carros
    struct Carro* pArray = (struct Carro*) calloc(3, sizeof(struct Carro));

    // Checagem de falha e saída de erro
    if (pArray == NULL) {
        printf("Falha na alocação de memória.\n");
        return 1;
    }

    strcpy(pArray[0].marca, "Ford");
    pArray[0].ano = 2015;

    strcpy(pArray[1].marca, "BMW");
    pArray[1].ano = 2018;

    strcpy(pArray[2].marca, "Volvo");
    pArray[2].ano = 2023;

    for (int i = 0; i < 3; i++){
        printf("Carro %d: %s ano %d\n", i+1, pArray[i].marca, pArray[i].ano);
    }

    free(pArray);
    pArray = NULL;

    return 0;
}
