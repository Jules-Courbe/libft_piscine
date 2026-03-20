#include <stdio.h>

void    multipl(int n)
{
    int i;
    int somme;

    i = 1;
    somme = 0;

    while (i <= 10)
    {
        somme = n * i;
        printf("%d x %d = %d\n", n, i, somme);
        i++;
    }
}

int main()
{
    multipl(5);
}