#include <stdio.h>
int main() {
    FILE *fptr;

    fptr = fopen("fopen.txt", "a");
    fprintf(fptr, "\n\nAdicionando conteúdo...");
    fclose(fptr);

    return 0;
}
