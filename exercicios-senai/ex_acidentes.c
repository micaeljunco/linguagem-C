#include <stdio.h>

void maior_indice(int codigos[5], int n_veiculos[5], int n_vitimas[5]);
void media_veiculos(int n_veiculos[5]);
int media_acidentes(int n_veiculos[5], int n_vitimas[5]);

int main()
{
    int codigos[5];
    int n_veiculos[5];
    int n_vitimas[5];

    for (size_t i = 0; i < 5; i++)
    {
        printf("Digite o código da %dª cidade: ", i+1);
        scanf("%d%*c", &codigos[i]);
        
        printf("Digite o número de veículos de passeio da %dª cidade: ", i+1);
        scanf("%d%*c", &n_veiculos[i]);
        
        printf("Digite o número de acidentes de trânsito com vítimas da %dª cidade: ", i+1);
        scanf("%d%*c", &n_vitimas[i]);

        printf("\n\n");
    }

    maior_indice(codigos, n_veiculos, n_vitimas);
    media_veiculos(n_veiculos);
    media_acidentes(n_veiculos, n_vitimas);
    
    return 0;
}

void maior_indice(int codigos[5], int n_veiculos[5], int n_vitimas[5])
{
    float indices[5];

    printf("----------- índice de acidentes de trânsito -----------\n");

    for (size_t i = 0; i < 5; i++)
    {
        indices[i] = (float) n_vitimas[i] / n_veiculos[i];
    }

    float maior_indice[2] = {indices[0], codigos[0]};
    float menor_indice[2] = {indices[0], codigos[0]};

    for (size_t i = 0; i < 5; i++)
    {
        if (indices[i] > maior_indice[0]){
            maior_indice[0] = indices[i];
            maior_indice[1] = codigos[i];
        }

        if (indices[i] < menor_indice[0]){
            menor_indice[0] = indices[i];
            menor_indice[1] = codigos[i];
        }
    }

    printf("Maior índice:\nCidade: %d;\nÍndice: %.2f\n\n", (int)maior_indice[1], maior_indice[0] * 100);
    printf("Menor índice:\nCidade: %d;\nÍndice: %.2f\n\n", (int)menor_indice[1], menor_indice[0] * 100);
}

void media_veiculos(int n_veiculos[5])
{
    float media_veiculos = 0;

    printf("----------- Média de veículos -----------");

    for (size_t i = 0; i < 5; i++)
    {
        media_veiculos += n_veiculos[i];
    }

    media_veiculos /= 5;

    printf("Média: %.2f%%\n", media_veiculos);
    
}

int media_acidentes(int n_veiculos[5], int n_vitimas[5])
{
    float media_acidentes = 0;
    int cont;

    printf("------ Média de acidentes em cidades com mais de 2000 veículos ------\n");

    for (size_t i = 0; i < 5; i++)
    {
        if (n_veiculos > 2000)
        media_acidentes += n_vitimas[i];
    }

    if (media_veiculos == 0)
    {
        printf("Sem média pra calcular.\n");
        return 1;
    }

    media_acidentes /= 5;
    
    printf("Média: %.2f%%\n", media_veiculos);
    return 0;

}