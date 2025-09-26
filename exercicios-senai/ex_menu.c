#include <stdio.h>

void imposto(float sal);
void salario(float sal);
void classificacao(float sal);

int main()
{
    int op;
    float sal;

    printf("---------- Menu de Opções ----------\n");
    printf("1 - Imposto;\n");
    printf("2 - Novo salário;\n");
    printf("3 - Classificação;\n");
    printf("Digite a opção desejada: \n");

    scanf("%d", &op);

    printf("\nDigite o seu salário atual em R$: ");
    scanf("%f", &sal);

    switch (op)
    {
    case 1:
        imposto(sal);
        break;
    
    case 2:
        salario(sal);
        break;
    
    case 3:
        classificacao(sal);
        break;
    
    default:
        printf("Opção inválida.\n");
        break;
    }

    return 0;
}

void imposto(float sal)
{
    int imposto;

    if (sal < 500.00) imposto = 5;
    else if (sal >= 500.00 && sal <= 850.00) imposto = 10;
    else imposto = 15;

    printf("\nSalário: R$%.2f; imposto: %d%% \n", sal, imposto);
}

void salario(float sal){
    float aumento;

    if (sal > 1500.00) aumento = 25;
    else if (sal >= 750.00 && sal <= 1500.00) aumento = 50;
    else if (sal >= 450.00 && sal < 750) aumento = 75;
    else aumento = 100;

    printf("Salário: R$%.2f; aumento: R$%.2f; salário após o aumento: R$%.2f\n", sal, aumento, sal + aumento);
}

void classificacao(float sal)
{
    if (sal > 700.00) printf("Bem renumerado.\n");
    else printf("Mal renumerado.\n");
}