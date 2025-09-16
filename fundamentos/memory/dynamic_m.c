// Memória dinâmica é memória alocada depois que o programa inicia
// Pode ser referido como "runtime memory allocation"
// Memória dinâmica não pertence a uma varável, pode ser apenas acessado
// por um ponteiro
#include <stdio.h>
#include <stdlib.h>

int main() {

    int *ptr1 = malloc(4);       // tamanho em bytes da alocção
    int *ptr2 = calloc(2, 8);    // quant de itens e bytes para alocar

    // Boa pratica
    int *ptr3, *ptr4;
    // printf("%d\n", *ptr3);           // Dá falha de segmentação aqui pois tenta se acessar um conteúdo que não existe
    printf("%p\n", ptr3);
    printf("%p\n", ptr4);

    ptr3 = malloc(sizeof(*ptr3));       // Utiliza-se malloc quando você já vai escrever em seguida
    ptr4 = calloc(1, sizeof(*ptr4));    // E calloc quando quer algo zerado (structs, arrays, etc)

    printf("%d\n", *ptr3);
    printf("%d\n", *ptr4);
}
