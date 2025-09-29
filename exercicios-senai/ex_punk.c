#include <stdio.h>
#include <ctype.h>

int main()
{
    int qtd_produtos = 12, i = 0;
    float preco_produtos[qtd_produtos], estocagem_produtos[qtd_produtos];
    char categoria_produtos[qtd_produtos], refrigeracao_produtos[qtd_produtos];

    while (i < qtd_produtos)
    {
        printf("Digite o preço do %dº produto em R$: ", i + 1);
        scanf("%f%*c", &preco_produtos[i]); // %*c consome o \n deixado pelo scanf

        if (preco_produtos[i] <= 20)
        {
            printf("Digite a categoria do %dº produto\n", i + 1);
            printf("Categorias:\n");
            printf("\tA: Alimentação; L: Limpeza; V: Vestuário: ");
            scanf("%c%*c", &categoria_produtos[i]); // espaço antes do %c para limpar o buffer

            switch (tolower(categoria_produtos[i]))
            {
            case 'a':
                refrigeracao_produtos[i] = 2.0;
                break;

            case 'l':
                refrigeracao_produtos[i] = 3.0;
                break;

            case 'v':
                refrigeracao_produtos[i] = 4.0;
                break;

            default:
                refrigeracao_produtos[i] = 0.0;
                break;
            }

            refrigeracao_produtos[i] = ' ';
        }
        else if (preco_produtos[i] > 20 && preco_produtos[i] <= 50)
        {
            printf("%dº produto necessita de refrigeração? (S/n): ", i + 1);
            scanf("%c%*c", &refrigeracao_produtos[i]);

            switch (tolower(refrigeracao_produtos[i]))
            {
            case 's':
                refrigeracao_produtos[i] = 6.0;
                break;

            default:
                refrigeracao_produtos[i] = 0.0;
                break;
            }
        }
        else
        {
            printf("Digite a categoria do %dº produto\n", i + 1);
            printf("Categorias:\n");
            printf("\tA: Alimentação; L: Limpeza; V: Vestuário: ");
            scanf("%c%*c", &categoria_produtos[i]); // espaço antes do %c para limpar o buffer

            printf("%dº produto necessita de refrigeração? (S/n): ", i + 1);
            scanf("%c%*c", &refrigeracao_produtos[i]);

            if (tolower(refrigeracao_produtos[i]) == 's')
            {

                switch (tolower(categoria_produtos[i]))
                {
                case 'a':
                    refrigeracao_produtos[i] = 5.0;
                    break;

                case 'l':
                    refrigeracao_produtos[i] = 2.0;
                    break;

                case 'v':
                    refrigeracao_produtos[i] = 4.0;
                    break;

                default:
                    refrigeracao_produtos[i] = 0.0;
                    break;
                }
            } else
            {

                switch (tolower(categoria_produtos[i]))
                {
                case 'l':
                    refrigeracao_produtos[i] = 1.0;
                    break;

                default:
                    refrigeracao_produtos[i] = 0.0;
                    break;
                }
            }
        }

        printf("\n");
        i++;
    }

    return 0;
}
