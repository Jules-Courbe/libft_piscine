/*Étant donné un tableau d'entiers nums, la moitié des entiers de ce tableau nums sont impairs et l'autre moitié sont pairs .

Triez le tableau de sorte que chaque fois nums[i]que est impair, i soit impair , et chaque fois nums[i] est pair, i soit pair .

Retournez tout tableau de réponses qui satisfait cette condition .

*/
#include <stdbool.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
// Quel est le paterne de cet exercice ? 
// Remplir un tableau initialiser 

int *fil_tab(int *tab, int size)
{
    int i = 0;
    int sizes = size;
    tab = malloc(sizeof(*tab) * size); 

    while (i < size)
    {
        tab[i] = 0;
        i++;
    }
    // Retourn un tableau d'entier malloc
    return (tab);
}

int* sortArrayByParityII(int* nums, int numsSize, int* returnSize) 
{
    int i;
    int j;
    int k;
    int *tab;
    int *tab_even;
    int *tab_odd;

    i = 0;
    j = 0;
    k = 0;
    // Malloc le tableau en fonction du nombre d'entier donne
    tab = fil_tab(tab, numsSize);
    // Tableau plus grand que prevu mais impossible a initiliser a la moitie si nums est impaire
    tab_even = fil_tab(tab_even, numsSize);
    tab_odd = fil_tab(tab_even, numsSize);
    // Remplissage du tableau de valeur 0


    while (i <= numsSize)
    {
        if (nums[i] % 2 == 0)
            
        i++;
    }

    i = 0;

    // Problematique principale si la valeur est pair et que i est impaire. Dois je stocker cette valeur et la mettre a i + 1 forcement ? 
    // Sinon je pourrais remplir d une part tous les impaires et ensuite les pairs 

    // 0 est pair 
    while (i <= numsSize)
    {
        if (nums[i] % 2 == 0 && i % 2 == 0)
        {
            tab_even[j] = nums[i];
        }
        if (!(nums[i] % 2 == 0 && i % 2 == 0))
        {
            tab_odd[k] = nums[i];
        }
        i++;
    }
    i = 0;
    while (i < numsSize)
    {
        printf("%d\n", tab_even[i]);
        i++;
    }
}

int main()
{
    int nums[6] = {3, 5, 7, 2, 4, 6};
    int tab[6];
    printf("%ls\n", sortArrayByParityII(nums, 6, tab));
}