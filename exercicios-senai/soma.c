#include <stdio.h>

// Função que calcula a soma dos números entre a e b
int somaEntre(int a, int b) {
    int soma = 0;

    if (a >= b) {
        return 0;  // Se o segundo número for menor ou igual, retorna 0
    }

    for (int i = a + 1; i < b; i++) {
        soma += i;
    }

    return soma;
}
