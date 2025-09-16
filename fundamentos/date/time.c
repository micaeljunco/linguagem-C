#include <stdio.h>
#include <time.h>

int main() {
    time_t horaAtual;
    time(&horaAtual);   // Obtem a hora atual

    printf("%s", ctime(&horaAtual));  // Exibe o tempo de forma pré-formatada
    return 0;
}
