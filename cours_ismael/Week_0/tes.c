
#include <stdio.h>

int count_int_tab(int *returnSize)
{
    int count;
    int i;
    
    i = 0;
    count = 0;

    while (returnSize[i] != 0)
    {
        count++;
    }

    return (count);
}

int main()
{
    int tab[2];
    tab[0] = 1;
    tab[1] = 2;
    tab[2] = 3;
    printf("%d", count_int_tab(tab));
}