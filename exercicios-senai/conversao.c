// Sub-rotina que converte segundos em horas, minutos e segundos
void converterTempo(int totalSegundos, int *horas, int *minutos, int *segundos) {
    *horas = totalSegundos / 3600;          // 1 hora = 3600 segundos
    totalSegundos = totalSegundos % 3600;   // resto após retirar as horas

    *minutos = totalSegundos / 60;          // 1 minuto = 60 segundos
    *segundos = totalSegundos % 60;         // resto final são os segundos
}
