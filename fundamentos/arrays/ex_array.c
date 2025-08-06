#include <stdio.h>

int main(int argc, char const *argv[])
{
    int array[] = {
        10, 20, 30, 50
    };

    printf("Primeiro elemento: %d\n\n", array[0]);

    array[0] = array[0] * array[3];

    printf("Primeiro elemento reatribuído: %d\n\n", array[0]);
    
    return 0;
}
