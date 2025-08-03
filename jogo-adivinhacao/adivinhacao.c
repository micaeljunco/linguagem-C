#include <stdio.h>

int numeroSecreto = 42;
int tentativas = 0;
#define MAX_TENTATIVAS 5 // define uma constante
#define MAX_CHUTE 256 // define uma constante
#define MIN_CHUTE 0 // define uma constante
int pontos = 500;
int acertou;
int chute;

int input() {
    printf("Qual é o seu palpite? ");
    scanf("%d", &chute);
}

int calcularPontos() {
    int pontosPerdidos = ((chute - numeroSecreto)/2);
    
    if (pontosPerdidos > 0) {
        pontos -= pontosPerdidos;

    } else {
        pontos += pontosPerdidos;

    }

    return 0;
}

int compararNumSec(int chute) {
    if (chute < MIN_CHUTE || chute > MAX_CHUTE)
    {
       printf("O paplite deve ser de %d a %d!\n\n", MIN_CHUTE, MAX_CHUTE);
       --tentativas;
       return 0;
    }
    
    acertou = (chute == numeroSecreto);

    if (chute < numeroSecreto)
    {
        printf("Seu palpite foi menor que o número secreto... \nTente novamente!\n\n");
    }
    else
    {
        printf("Seu palpite foi maior que o número secreto... \nTente novamente!\n\n");
    }

    calcularPontos();

    return 0;
}

int main() {
    printf("*************************************\n");
    printf("* Bem-vindo ao jogo de adivinhação! *\n");
    printf("*************************************\n");
    printf("\nSeu objetivo aqui é adivinhar um valor que a máquina pensou em %d tentativas. O número está entre %d e %d, boa sorte.\n\n", MAX_TENTATIVAS, MIN_CHUTE, MAX_CHUTE);

    
    while (MAX_TENTATIVAS>tentativas++ && !acertou)
    {
        printf("Tentativa: %d de %d\n", tentativas, MAX_TENTATIVAS);
        printf("Pontos: %d\n", pontos);
        input();
        compararNumSec(chute);
    }

    if (acertou)
    {
        printf("\n* Parabéns! Você adivinhou o número secreto em %d tentativa(s) e fez %d pontos! *\n", --tentativas, pontos);
        return 0;
    }
    
    printf("\n* Que pena, você perdeu. :( Mas não desista! Tente jogar novamente. *\n");
    return 0;
}