#include <stddef.h>
#include <stdio.h>

int grow(size_t size, const int arr[size]);

int main()
{
    int arr[3] = {1,2,3};
    printf("%d\n", grow(3, arr));
    return 0;
}

int grow(size_t size, const int arr[size])
{
    int res = 0;
    for (int i = 0, j = 0; i < size; i++)
    {
        res += arr[i] * arr[i+1];
    }

    return res;
}
