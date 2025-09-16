#include <stdio.h>
#include <time.h>

int main() {
    time_t agora = time(NULL);
    struct tm* t = localtime(&agora);

    char buffer[100];

    printf("Dia: %d\n", t->tm_mday);
    printf("Mês: %d\n", t->tm_mon + 1);     // Meses começam em 0
    printf("Ano: %d\n", t->tm_year + 1900); // tm_year guarda anos desde 1900
    printf("Hora: %d\n", t->tm_hour);
    printf("Minuto: %d\n", t->tm_min);

    printf("\n%d-%d %d:%d\n", t->tm_mday, t->tm_mon, t->tm_hour, t->tm_min);

    strftime(buffer, sizeof(buffer), "%d-%m-%Y %H:%M:%S", t);
    printf("Tempo formatado com \"strftime\": %s\n", buffer);

    return 0;
}
