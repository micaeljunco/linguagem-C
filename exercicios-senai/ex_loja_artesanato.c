#include <stdio.h>

int main()
{
    const int n = 10;
    float precos[n];
    int quantidades[n];
    float valorTotal[n];
    float salarioFixo = 545.0;
    float comissaoPercentual = 0.05;

    for (int i = 0; i < n; i++)
    {
        printf("Digite o preço unitário do %dº objeto: ", i + 1);
        scanf("%f", &precos[i]);
        printf("Digite a quantidade vendida do %dº objeto: ", i + 1);
        scanf("%d", &quantidades[i]);
        valorTotal[i] = precos[i] * quantidades[i];
    }

    printf("\nRelatório de vendas:\n");
    printf("Objeto  Quantidade  Valor Unitário  Valor Total\n");

    float totalVendas = 0;
    int posMaisVendido = 0;
    for (int i = 0; i < n; i++)
    {
        printf("%6d  %10d  %14.2f  %11.2f\n", i + 1, quantidades[i], precos[i], valorTotal[i]);
        totalVendas += valorTotal[i];

        if (quantidades[i] > quantidades[posMaisVendido])
        {
            posMaisVendido = i;
        }
    }

    float comissao = totalVendas * comissaoPercentual;

    printf("\nValor total das vendas: R$ %.2f\n", totalVendas);
    printf("Comissão do vendedor (5%%): R$ %.2f\n", comissao);
    printf("Valor fixo do salário: R$ %.2f\n", salarioFixo);
    printf("Salário total (fixo + comissão): R$ %.2f\n", salarioFixo + comissao);
    printf("Objeto mais vendido: %d (quantidade %d)\n", posMaisVendido + 1, quantidades[posMaisVendido]);

    printf("\n\n-----Micael Jeferson Junco-----\n\n");

    return 0;
}
