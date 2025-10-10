#include <stdio.h>

// Função que determina e mostra o maior e o menor entre quatro números
void avaliarNumeros(int n1, int n2, int n3, int n4) {
    int maior = n1;
    int menor = n1;

    // Verifica o maior
    if (n2 > maior) maior = n2;
    if (n3 > maior) maior = n3;
    if (n4 > maior) maior = n4;

    // Verifica o menor
    if (n2 < menor) menor = n2;
    if (n3 < menor) menor = n3;
    if (n4 < menor) menor = n4;

    printf("O maior número digitado foi: %d\n", maior);
    printf("O menor número digitado foi: %d\n", menor);
}
