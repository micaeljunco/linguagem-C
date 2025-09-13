#include <stdio.h>

// Nas unions, você só pode usar um valor por vez e ela ocupa o espaço do maior membro
union Uniao {
    int inteiro;
    float pFlutuante;
    char string[20];                // maior membro
};

int main() {
    union Uniao u;
    u.inteiro = 12;
    u.pFlutuante = 12.5;
    printf("%d\n", u.inteiro);      // Não imprime 12, dá problema
    printf("%.1f\n", u.pFlutuante); // Funciona, já que usamos o float por ultimo

    printf("%zu\n",sizeof(u));

    return 0;
}
