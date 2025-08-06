#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num = 2;
    
    for (int i = 1; i <= 10; i++)
    {
        printf("%d * %d = %d\n", num, i, num*i);
    }
    
    return 0;
}
