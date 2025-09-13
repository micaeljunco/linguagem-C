#include <stdio.h>

int somar (int *nums, int len);

int main () {
    int nums[] = {1,2,3,4};
    int len = sizeof(nums)/4;
    printf("A soma de todos os valores é: %d\n",somar(nums, len));

    return 0;
}

int somar (int *nums, int len) {
    int res = 0;
    int i;
    for (i = 0; i < len; i++) {
        res += *(nums + i);
    }

    return res;
}
