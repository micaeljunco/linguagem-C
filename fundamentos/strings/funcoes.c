#include <stdio.h>
#include <string.h>

int main() {

    char string[] = "adoro linguagem c";
    char string2[] = "adoro python ";
    char string3[] = "e js";
    printf("String: %s\n",string);

    // Funções uteis para strings:

    printf("Tamanho da string: %zu\n", strlen(string));     // Não conta o "\0"

    strcat(string2, string3); // resultado é guardado na string2

    printf("Concatena strings: %s\n", string2);

    char str1[10];
    char str2[10] = "Kitty";
    strcpy(str1, str2);   // resultado é guardado na str1
    // OBS: o tamanho da string precisa ter espaço o suficiente para a string2

    printf("Copia strings: %s\n", str1);

    printf("Compara strings: %d\n", strcmp(str1, str2));        // Retorna 0 se forem iguais, ou negativo se forem diferentes
    printf("Procurar em uma string: %s\n", strcasestr(string2, "py")); // Exibe à partir de "py"
    printf("Strchr: %s\n", strchr(string2, 'p')); // retorna um ponteiro para o caractere encontrado (ou seja, imprime a string a partir do 'p')

    return 0;
}
