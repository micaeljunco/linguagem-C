#include <stdio.h>

int inteiro;
float flutuante;
double numDouble;
char caractere;

int main(int argc, char const *argv[])
{
    printf("%zu\n", sizeof(inteiro));
    printf("%zu\n", sizeof(flutuante));
    printf("%zu\n", sizeof(numDouble));
    printf("%zu\n", sizeof(caractere));
    return 0;
}
