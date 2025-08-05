#include <stdio.h>

int main(int argc, char const *argv[])
{
    int itens = 50;
    float valorPorItem = 5.99;
    float valorTotal = itens * valorPorItem;
    char moeda[] = "R$"; // Isso declara uma string e usamos a máscara %s para ela.

    printf("Número de itens: %d\n", itens);
    printf("Valor por item: %s:%.2f\n", valorPorItem, moeda);
    printf("Valor total = %s:%.2f\n", valorTotal, moeda);


    return 0;
}
