#include <errno.h>
#include <stdio.h>
#include <string.h>

int main() {

    FILE *fptr = fopen("arquivo-que-nao-existe.txt", "r");

    if (fptr == NULL) {
        printf("Erro ao abrir arquivo: %s\n", strerror(errno));
        return 1;
    }

    fclose(fptr);

    return 0;
}
