#include <stdio.h>
/*
Objectif
Prendre une matrice n x m
Retourner l’indice de la colonne dont la somme est maximale
Exemple
int tab[2][3] = {
    {1, 2, 3},
    {4, 5, 6}
};


Sommes :
col 0 → 5
col 1 → 7
col 2 → 9

Résultat attendu : 2
*/

int colonne_max(int tab[4][3], int n, int m)
{
    int index = 0;
	int max = 0;
    int i = 0;
    int j = 0;

    if (!tab)
        return (0);

    while (j < m)
    {
		int somme = 0;
        while (i < n)
        {
			somme += tab[i][j];
			i++;
        }
		if (somme >= max)
		{
			max = somme;
			index = j;
		}
		i = 0;
        j++;
    }
	return (index);
}

int main()
{
    int tab[4][3] = {
        {1, 2, 3},
        {2, 5, 7},
		{3, 5, 7},
		{4, 5, 7}
    };
    printf("%d", colonne_max(tab, 4, 3));
}