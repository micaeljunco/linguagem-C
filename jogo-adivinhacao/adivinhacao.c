#include <stdio.h>

int numeroSecreto = 42;
int tentativas = 0;
int chute;

int banner() {
    printf("*************************************\n");
    printf("* Bem-vindo ao jogo de adivinhação! *\n");
    printf("*************************************\n");
    return 0;
}

int input() {
    printf("Qual é o seu chute? ");
    scanf("%d", &chute);
    return 0;
}

int main() {
    banner();
    input();
    printf("Seu chute é: %d\n", chute);
    return 0;
}