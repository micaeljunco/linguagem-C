#include <stdio.h>
#include <stdlib.h>

int main() {

    // ponteiros são um apontador para um endereço de memória
    int var = 15;
    int *pointer;               // declaração de um ponteiro utilizando * antes do nome da variavel
    pointer = &var;             // Atribuimos a pointer o endereço na memoria da variavel var

    printf("Conteúdo de var: %d\n", var);
    printf("Essa variável \"var\" do tipo inteiro existe em um determinado endereço físico da memória do computador.\n");
    printf("Endereço de var: %p\n", &var);                          //%p para ponteiros e & para acessar o endereço
    printf("É nesse endereço físico que armazenamos o valor \"15\".\n");

    printf("Conteúdo apontado por pointer: %d\n", *pointer);        // ao utilizar * referenciamos o conteudo armazenado no endereço da memoria
    printf("Endereço apontado por pointer: %p\n", pointer);         //%p para ponteiros e & para acessar o endereço
    printf("Endereço de pointer:           %p\n", &pointer);        //%p para ponteiros e & para acessar o endereço

    *pointer = 67;
    printf("\n\nNovo valor da variável var atribuído através do ponteiro: %d\n", var);

    return 0;
}
