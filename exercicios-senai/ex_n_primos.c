#include <stdio.h>
#include <math.h>

int main()
{
    const size_t n = 9;
    int n_primos[n];

    for (size_t i = 0; i < n; i++)
    {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &n_primos[i]);
    }

    printf("\n");

    for (size_t i = 0; i < n; i++)
    {
        int num = n_primos[i];
        if (num > 1)
        {
            int primo = 1; // inicia verdadeiro
            for (size_t j = 2; j <= sqrt(num); j++)
            {
                if (n_primos[i] % j == 0)
                {
                    primo = 0;
                    break;
                }
            }
            if (primo)
                printf("Número primo encontrado na posição %d : %d ;\n", i, num);
        }
    }

    printf("\n\n-----Micael Jeferson Junco-----\n\n");

    return 0;
}
