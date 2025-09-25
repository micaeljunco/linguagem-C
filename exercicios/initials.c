#include <ctype.h>
#include <stdio.h>

char *get_initials (const char *full_name, char initials[4]);

int main()
{
    char *full_name = "Xixo Bazinger";
    char initias[4];
    printf("Iniciais: %s\n", get_initials(full_name, initias));
    return 0;
}

char *get_initials (const char *full_name, char initials[4])
{
    initials[0] = toupper(full_name[0]);
    initials[1] = '.';

    while (*full_name != '\0')
    {
        if (*full_name == ' ')
        {
            initials[2] = toupper(*(full_name+1));
            break;
        }
        full_name++;
    }

    initials[3] = '\0'; // write to initials
    return initials; // return it
}
