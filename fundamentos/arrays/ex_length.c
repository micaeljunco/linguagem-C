#include <stdio.h>

int main(int argc, char const *argv[])
{
    int array[] = {25, 50, 75, 100};                   // array de 4 elementos
    // sizeof() retorna o tamanho total em bytes de uma variável
    // esse array é só de inteiros, cada inteiro vale 4 bytes,
    // então fazemos o calculo a seguir para obter p tamanho de um array:
    int length = sizeof(array) / sizeof(array[0]); // 16 / 4 = 4

    for (int i = 0; i < length; i++)
    {
        printf("%d\n", array[i]); // imprime cada elemento
    }

    return 0;
}
