#include <stdio.h>

int main()
{
int nb;

nb = 1;

    
    while (nb <= 100)
    {
        if ((nb % 3) == 0 && (nb % 5) == 0)
            printf("fizzbuz\n");

        else if ((nb % 3) == 0)
            printf("Fizz\n");
        else if ((nb % 5) == 0)
            printf("Buzz\n");
        else 
            printf("%d\n", nb);
        nb++;
    }

}