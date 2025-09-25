
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *double_char (const char *string, char *doubled);

int main()
{
    char *doubled;
    char *string = "String";
    printf("%s\n", double_char(string, doubled));
    return 0;
}

char *double_char (const char *string, char *doubled)
{
    int len = strlen(string);
    if (len == 0)
    {
        return "";
    }

    doubled = calloc(len * 2 + 1, sizeof(char));    // extra space for \0

    for (int i = 0, j = 0; i < len; i++)
    {
        doubled[j++] = string[i];
        doubled[j++] = string[i];
    }

    return doubled; // return it
}
