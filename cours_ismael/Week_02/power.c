#include <stdio.h>

int power(int nb, int exp)
{
    if (exp == 1)
        return (nb);
    if (exp == 0)
        return (1);
    else 
        return (nb * power(nb, exp - 1));
}

int main()
{
    printf("%d\n", power(5, 5));
}