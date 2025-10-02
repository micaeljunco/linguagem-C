#include <stdio.h>

int main()
{
    const int n = 5;
    char modelos[n][10 + 1];
    float consumo[n];

    for (size_t i = 0; i < n; i++)
    {
        printf("Digite o modelo do %dº carro: ", i + 1);
        scanf("%10s", modelos[i]);
    }

    printf("\n");

    for (size_t i = 0; i < n; i++)
    {
        printf("Quantos Km o modelo %s fez com um litro de combustível? ", modelos[i]);
        scanf("%f", &consumo[i]);
    }

    printf("\n");

    int maisEconomico = 0;
    for (size_t i = 1; i < n; i++)
    {
        if (consumo[i] > consumo[maisEconomico])
        {
            maisEconomico = i;
        }
    }

    printf("O modelo de carro mais econômico é %s, com %.2f km/l.\n", modelos[maisEconomico], consumo[maisEconomico]);

    printf("Consumo de combustível para percorrer 1000 km:\n");
    for (size_t i = 0; i < n; i++)
    {
        float litros = 1000.0 / consumo[i];
        printf("%s consome %.2f litros\n", modelos[i], litros);
    }

    printf("\n\n-----Micael Jeferson Junco-----\n\n");

    return 0;
}
