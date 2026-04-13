// Somme d’un tableau
#include <stdio.h>
int count = 0;

void array_sum(int *arr, int size)
{
    if (size == 0)
        return;
    count += *arr;
    return (array_sum(arr + 1, size - 1));
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    array_sum(arr, 5);
    printf("%d", count);
}
