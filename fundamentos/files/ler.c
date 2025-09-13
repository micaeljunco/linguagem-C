#include <stdio.h>

int main() {
    FILE *fptr;

    fptr = fopen("teste.txt", "r");

    if (fptr == NULL) {
        printf("Arquivo não encontrado...\n");
        fclose(fptr);
        return 0;
    }

    char fContent[100];

    while (fgets(fContent, 100, fptr)) {
        printf("%s",fContent);
    }

    fclose(fptr);

    return 0;
}
