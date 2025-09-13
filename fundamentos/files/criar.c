#include <stdio.h>
int main() {
    FILE *fptr;

    fptr = fopen("fopen.txt", "w");
    fprintf(fptr, "Este arquivo foi escrito\nusando linguagem C.");
    fclose(fptr);

    return 0;
}
