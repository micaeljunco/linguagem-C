#include <stdio.h>
#include <string.h>

// Structs ocupam a soma de todos os tipos primitivos + paddings e podem ter todos os valores acessados ao mesmo tempo
struct Pessoa {
    int idade;          // Membro
    char nome[10];      // Membro
};

int main() {
    struct Pessoa xixo;
    struct Pessoa kabaco = {18, "Kabaco"};

    xixo.idade = 16;
    strcpy(xixo.nome, "Xixo");          // Workaround já que não podemos atribuir uma string diretamente a struct

    printf("%s tem %d anos\n",xixo.nome, xixo.idade);
    printf("%s tem %d anos\n",kabaco.nome, kabaco.idade);

    struct Pessoa kabaco2 = kabaco;
    strcpy(kabaco2.nome, "Evil Kabaco");

    printf("%s tem %d anos\n",kabaco2.nome, kabaco2.idade);

    return 0;
}
