#include <stdio.h>

int main()
{
    float sal = 1000;
    float perc_aumento = 1.5;

    printf("\nUm funcionário foi contratado em 2018 com salário inicial de R$1000.00;\n");
    printf("Em 2019 ele recebeu um aumento de 1,5%% sobre seu salário, que dobrava\n");
    printf("nos anos seguintes (2019 = 1,5%% ; 2020 = 3,0%% ; ...) e sempre sendo aplicado ao salário anterior\n");
    printf("O salário atual deste funcionário (2025) com todos os aumentos nos últimos anos é: ");

    for (size_t i = 0; i < 7; i++)
    {
        sal += sal * (perc_aumento/100.00);
        perc_aumento*=2;
    }

    printf("R$%.2f\n\n", sal);

    return 0;
}
