#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    FILE *fptr = fopen("arquivo-que-nao-existe.txt", "r");

    if (fptr == NULL) {
        printf("Erro ao abrir arquivo: %s\n", strerror(errno));
        exit(EXIT_FAILURE);     // Mais legível assim
    }

    fclose(fptr);

    exit(EXIT_SUCCESS);
}
