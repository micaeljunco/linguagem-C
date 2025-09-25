#include <stdio.h>
int past(int hours, int minutes, int seconds) ;

int main() {

    printf("%d\n", past(0, 1, 1));

    return 0;
}

int past(int hours, int minutes, int seconds) {
    // Se 1s = 1000ms, obtem a quantidade total de segundos e multiplica por 1000
    return ((hours*60*60)+(minutes*60)+seconds) * 1000;
}
