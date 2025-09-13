#include <stdio.h>

int main() {
    const char string[] = "Hello, World!";
    // Vale lembrar que podemos inserit \", \', \\, \n, \t, \0 aqui se quisermos.
    printf("%s\n", string);

    // Já que strings são arrays, você pode printar letra por letra
    int i;
    // Strings em C tem um byte "\0" ao fim delas,
    // e isso conta no tamanho em bytes da variavel, então subtraí 1 para me livrar dele.
    for (i = 0; i < sizeof(string)-1; i++) {
        printf("%d -> %c\n", i+1, string[i]);
    }
    return 0;
}
