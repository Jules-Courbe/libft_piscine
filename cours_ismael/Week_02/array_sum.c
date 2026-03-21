// Somme d’un tableau
#include <stdio.h>

int array_sum(int *arr, int size)
{
    if (size == 0)
        return (0);
    return (*arr + array_sum(arr + 1, size - 1));
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    printf("%d", array_sum(arr, 5));
}
