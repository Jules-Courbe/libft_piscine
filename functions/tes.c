#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ftou_atoi(char *str)
{
    int i = 0;
    int sign = 1;
    int res = 0;

    while (str[i])
    {
    while (str[i] == ' ')
        i++;
    if (str[i] == '-')
    {
        sign = sign * -1;
        i++;
    }
    while (str[i] < '0' || str[i] > '9')
        i++;
    res = (res * 10) + (str[i] - '0');
    i++;
    }
    return (res * sign);
}

int fib(int n)
{
    if (n == 0)
        return (0);
    if (n == 1)
        return (1);
    return (fib(n - 1) + fib(n - 2));
}

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


int	main(int argc, char **argv)
{
    int nb = 0;
    if (argc > 2)
        return (0);
    //nb = ftou_atoi(argv[1]);

    printf("%d", factorial(8));
}