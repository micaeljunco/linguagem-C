#include <stdio.h>

int main() {

    int inteiro;
    char caractere;

    printf("Digite um número e um caractere e aperte Enter:\n");
    scanf("%d %c", &inteiro, &caractere);
    printf("Você digitou o número %d e o caractere %c.\n", inteiro, caractere);

    char nome[30];

    printf("Digite seu nome:\n");
    scanf("%29s", nome);      // nome nesse caso já é &nome[0], mas poderia ser usado com & sem problemas.
    // Para não "estourar" o array e gerar um erro, limita o tamanho para 29 caracteres
    printf("Seu nome é %s.\n", nome);

}
