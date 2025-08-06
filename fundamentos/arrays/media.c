#include <stdio.h>

int main(int argc, char const *argv[])
{
    float notas[] = {
        10, 2.5, 4.7, 8.9};
    int notas_length = (sizeof(notas) / sizeof(notas[0]));
    float media_notas;

    printf("\nNotas: ");

    for (int i = 0; i < notas_length; i++)
    {
        printf("%.2f ", notas[i]);
        media_notas += notas[i];
    }

    media_notas = media_notas/notas_length;
    printf("\nMédia das notas: %.2f\n\n", media_notas);
    
    return 0;
}
