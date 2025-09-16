#include <stdio.h>
#include <stdlib.h>
int main() {

    FILE *fptr = fopen("arquivo-que-nao-existe.txt", "r");

    if (fptr == NULL) {
        perror("Erro ao abrir arquivo");
        return 1;
    }

    fclose(fptr);

    return 0;
}
