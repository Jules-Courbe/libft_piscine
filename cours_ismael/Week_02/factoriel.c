#include <stdio.h>

int factorial(int n)
{
    // condition d'arret
    if (n < 0)
        return (0);
    if (n == 0)
        return (1);
    if (n == 1)
        return (1);
    else
    {
        return (n * factorial(n - 1));
    }
}

int main()
{
    printf("%d", factorial(2));
}