#include <stdio.h>
#include "conversao.c"

int main() {
    int totalSegundos;
    int h, m, s;

    printf("Digite o valor em segundos: ");
    scanf("%d", &totalSegundos);

    converterTempo(totalSegundos, &h, &m, &s);

    printf("%d segundo(s) equivale(m) a %d hora(s), %d minuto(s) e %d segundo(s)\n",
           totalSegundos, h, m, s);

    printf("\nMicael Jeferson Junco\n");

    return 0;
}
