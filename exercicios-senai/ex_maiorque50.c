#include <stdio.h>

int main()
{
    const size_t n = 10;
    int numeros[n];

    for (size_t i = 0; i < n; i++)
    {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    printf("\n");

    int n_maiores = 0;
    for (size_t i = 0; i < n; i++)
    {
        if (numeros[i] > 50)
        {
            printf("Número maior que 50 encontrado na posição %d : %d ;\n", i, numeros[i]);
            n_maiores++;
        }
    }
    if (n_maiores == 0)
        printf("Nenhum número maior que 50 foi encontrado.\n");

    printf("\n\n-----Micael Jeferson Junco-----\n\n");

    return 0;
}
