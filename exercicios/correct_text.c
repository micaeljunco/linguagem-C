#include <stdio.h>
#include <string.h>

char *correct(char *string);

int main()
{
    char string[] = "L0ND0N";
    printf("%s\n", correct(string));

    return 0;
}

char *correct(char *string)
{
    for (int i = 0; string[i] != '\0'; i++)
    {
        switch (string[i]) {
            case '0': string[i] = 'O'; break;
            case '1': string[i] = 'I'; break;
            case '5': string[i] = 'S'; break;
        }
    }

    return string;
}
