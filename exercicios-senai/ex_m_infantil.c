#include <stdio.h>

int main()
{
    int n_criancas;

    printf("Insira o número de crianças nascidas no período:");
    scanf("%d%*c",&n_criancas);

    if (n_criancas <= 0)
    {
        printf("Valor inválido.\n");
        return 1;
    }
    
    char cri_sexo[n_criancas];
    char cri_tempo_vida[n_criancas];

    for (size_t i = 0; i < n_criancas; i++)
    {
        printf("Sexo da %dª criança:",i+1);
        scanf("%c", &cri_sexo[i]);
        
        printf("Tempo de vida da %dª criança:",i+1);
        scanf("%c", &cri_tempo_vida[i]);
    }

    return 0;
}
