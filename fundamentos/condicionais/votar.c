#include <stdio.h>

// Boolean em C

int main(int argc, char const *argv[])
{
    const int MIN_IDADE_VOTAR = 16;
    int minhaIdade = 16;

    printf("%i\n", minhaIdade>=MIN_IDADE_VOTAR); // Retorna 1 para true e 0 para false

    if (minhaIdade>=MIN_IDADE_VOTAR)
    {
        printf("Pode votar!\n");
    } else {
        printf("Não pode votar!\n");
    }
    
    return 0;
}
