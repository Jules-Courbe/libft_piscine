#include <stdio.h>

int main()
{
    int nb;
    int sommes;

    nb = 1;
    sommes = 0;
    

    //afficher les nb jusqu a 100
    while (nb <= 100)
    {
        if ((nb % 2) == 0)
            sommes += nb;
        nb++;
    }
    printf("%d", sommes);

    return (0);
}