#include <dirent.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {

    struct dirent **nameList;
    int n_files;

    n_files = scandir(".", &nameList, NULL, NULL);

    if (n_files < 0)
    {
        perror("scandir");
    }

    for (int i = 0; i < n_files; i++)
    {
        printf("%s\n", nameList[i]->d_name);
        free(nameList[i]);
    }
    
    free(nameList);

    return 0;
}