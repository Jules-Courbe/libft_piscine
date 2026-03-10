/*Étant donné un tableau d'entiers indexé à partir de 1numbers et déjà trié par ordre croissant , trouvez deux nombres dont la somme est égale à un targetnombre donné. Soient ces deux nombres et , où .numbers[index1]numbers[index2]1 <= index1 < index2 <= numbers.length

Retournez les indices des deux nombres  et , chacun incrémenté de un, sous forme de tableau d'entiers de longueur 2.index1index2[index1, index2]

Les tests sont générés de telle sorte qu'il n'existe qu'une seule solution . Vous ne pouvez pas utiliser deux fois le même élément.

Votre solution doit utiliser uniquement de l'espace supplémentaire constant.*/

//Besoin de calculer la longueur d'un tableau d'entier

#include <stdio.h>

int *calcul_sum(int *numbers, int numbersSize, int target, int *returnSize)
{
    int i;
    int j;
    int count;

    count = 0;
    i = 0;
    j = 1;

    // tant que size inferieur a i
    while (i < numbersSize)
    {
        while (j < numbersSize)
        {
            //comment multiplier le nombre index a additionner
            //creer un tableau remplis de 1 a 1++ jusqu a returnSize mais qui est un tableau 
            count = numbers[i] + numbers[j];
            if (count == target)
            {
                //pb de pointeur et d'adresse
                //remplissage du tableau des index additionner et non des aditionner 
                numbers[0] = i;
                numbers[1] = j; 
                printf("valeur de numbers[0] %d\n", numbers[0]);
                printf("valeur de numbers[1] %d\n", numbers[1]);
                returnSize = numbers;
                return (returnSize);
            }
            j++;
        }
        j = 0;
        i++;
    }
    return (0);
}

int main()
{
    int nbrs[] = {10, 1, 4, 3};
    int tab[2];
    printf("%ls", calcul_sum(nbrs, 13, 4, tab));
}
