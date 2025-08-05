#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int tentativas = 0;
int max_tentativas;
#define MAX_CHUTE 256 // define uma constante
#define MIN_CHUTE 0   // define uma constante
float pontos = 1000;
int acertou;
int chute;
int numeroSecreto;

int selecaoDifucldade()
{
    int entradaValida = 0;
    int selecao;

    printf("Qual o nível de dificuldade da partida?\n");
    printf("(0) Fácil\n(1) Médio\n(2) Difícil\n\n");
    printf("Escolha: ");
    scanf("%d", &selecao);

    switch (selecao)
    {
    case 0:
        printf("\nSelecionado: Fácil.\nBoa sorte.\n\n");
        max_tentativas = 15;
        break;

    case 1:
        printf("\nSelecionado: Médio.\nBoa sorte.\n\n");
        max_tentativas = 10;
        break;

    case 2:
        printf("\nSelecionado: Difícil.\nBoa sorte.\n\n");
        max_tentativas = 7;
        break;

    default:
        printf("\nSelecionado: Impossível.\nBoa sorte.\n\n");
        max_tentativas = 5;
        break;
    }
}

int calcularPontos()
{
    // Pega o número absoluto, ou seja, -3 se tornaria 3 graças à essa função
    float pontosPerdidos = abs((chute - numeroSecreto) / (double)2);

    pontos -= pontosPerdidos;

    return 0;
}

int compararNumSec(int chute)
{
    if (chute < MIN_CHUTE || chute > MAX_CHUTE)
    {
        printf("O paplite deve ser de %d a %d!\n\n", MIN_CHUTE, MAX_CHUTE);
        --tentativas;
        return 0;
    }

    acertou = (chute == numeroSecreto);

    if (chute < numeroSecreto)
    {
        printf("\nO número secreto é maior que seu palpite... \nTente novamente!\n\n");
    }
    else
    {
        printf("\nO número secreto é menor que seu palpite... \nTente novamente!\n\n");
    }

    return 0;
}

int main()
{
    srand(time(NULL));
    numeroSecreto = rand() % MAX_CHUTE;

    printf("*************************************\n");
    printf("* Bem-vindo ao jogo de adivinhação! *\n");
    printf("*************************************\n");

    selecaoDifucldade();

    printf("\nSeu objetivo aqui é adivinhar um valor que a máquina pensou em %d tentativas. O número está entre %d e %d, boa sorte.\n\n", max_tentativas, MIN_CHUTE, MAX_CHUTE);

    while (max_tentativas > tentativas++ && !acertou)
    {
        printf("Tentativa: %d de %d\n", tentativas, max_tentativas);
        printf("Pontos: %.1f\n", pontos);

        printf("Qual é o seu palpite? ");
        scanf("%d", &chute);

        compararNumSec(chute);

        calcularPontos();
    }

    if (acertou)
    {
        printf("\n* Parabéns! Você adivinhou o número secreto em %d tentativa(s) e fez %.1f pontos! *\n", --tentativas, pontos);
        return 0;
    }

    printf("\n* Que pena, você perdeu. :( Mas não desista! Tente jogar novamente. *\n");
    return 0;
}