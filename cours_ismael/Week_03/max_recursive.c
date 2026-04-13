#include <stdio.h>
int max = 0;

int max_recursive(int *arr, int size)
{
    if (size == 0)
        return (max);
    if (max <= *arr)
        max = *arr;
    return (max_recursive(arr + 1, size - 1));
    printf("%d", max);
}

// 1, 2, 3, 4, 5 / 5
// 2, 3, 4, 5 / 4

int main()
{
    int arr[5] = {-1, -12, -6, -4, -5};
    printf("%d\n", max_recursive(arr, 5));
}