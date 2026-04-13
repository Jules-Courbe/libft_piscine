/*Objectif
Allouer dynamiquement un tableau de tableaux
Ligne i contient i+1 éléments
Remplir avec :

tab[i][j] = i + j;


Exemple pour n = 4
0
1 2
2 3 4
3 4 5 6


Contraintes
Utiliser malloc
Retourner int **
Ne pas afficher dans la fonction

Bonus
Écrire également :

void free_triangle(int **tab, int n);
*/
#include <stdio.h>
#include <stdlib.h>

// tableau de tableau = retourner l'adresse de la premiere case du tableau 0 

void free_triangle(int **tab, int n)
{
    int i = 0;

    while (i < n)
    {
        free(tab[i]);
        i++;
    }
    free (tab);
}

int **create_triangle(int n)
{
    int i = 0;
    int j = 1;
    int k = 0;
    int **tab;

    if (!tab)
    {
        free (tab);
        return(NULL);
    }
    tab = malloc(sizeof(int *) * n);

    // Malloc chaque tableau du tableau 

    while (i < n)
    {
        tab[i] = malloc(sizeof(int) * j);
        if (!tab[i])
        {
            free_triangle(tab, i - 1);
            return (NULL);
        }
        i++;
        j++;
    }
    // i = 1 : tab[i] = 4oct * 1 -> 0
    // i = 2 : tab[i] = 4oct * 2 -> 01

    i = 0;
    j = 0;

    // creer un tableau [0], [1, 2], [1, 2, 3] etc.. 
    while (i < n)
    {
        while (j <= i)
        {
            tab[i][j] = i + j;
            j++;
        }
        j = 0;
        i++;
    }

    // i = 0 / j = 0 tab[i][j] = i + j = 0 + 0
    // i = 1 / j = 0 tab[i][j] = i + j = 1 + 0 -> i = 1 / j = 1 tab[i][j] = i + j = 1 + 1 

    return (tab);
}

int main()
{
    int **tab;
    int i;
    int j;

    tab = create_triangle(4);
    i = 0;
    j = 0;
    while (i < 4)
    {
        while (j <= i)
        {
            printf("%d", tab[i][j]);
            j++;
        }
        j = 0;
        printf("\n");
        i++;
    }
    free_triangle(tab, 4);
    return (0);
}