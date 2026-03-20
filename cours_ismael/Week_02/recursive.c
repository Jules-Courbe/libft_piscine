#include <stdlib.h>
#include <stdio.h>

void    count_plus_1(int *p, int *itteration)
{
    printf("%d\n", *p);
    if (*p >= *itteration)
        return;
    *p += 1;
    count_plus_1(p, itteration);
}


int main()
{
    int *itteration;
    int *p;
    *itteration = 5;
    *p = 0;
    count_plus_1(p, itteration);
}