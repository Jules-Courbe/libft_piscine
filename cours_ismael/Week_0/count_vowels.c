#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Compter les voyelles

Objectif : Parcourir une chaîne via un pointeur.

Écrire une fonction int count_vowels(const char *str) qui retourne le nombre de voyelles (a, e, i, o, u et y) dans une chaîne.

Exemple :

char s[] = "bonjour";
int n = count_vowels(s);  // n = 3*/

int count_vowels(const char *str)
{
    int count;
    int count_2;
    int i;
    int j;
    char vowel[6];
    char *voyelle;

    voyelle = malloc(sizeof(*voyelle) * 7);
    voyelle = "aeiouy";


    count = 0;
    count_2 = 0;
    i = 0;
    j = 0;

    vowel[0] = 'a';
    vowel[1] = 'e';
    vowel[2] = 'i';
    vowel[3] = 'o';
    vowel[4] = 'u';
    vowel[5] = 'y';
    vowel[6] = '\0';

    if (!str[i])
        return (0);
    // dois je mettre le '\0' a la fin de vowel ? 

    while (str[i])
    {
        while (voyelle[j])
        {
            if (voyelle[j] == str[i])
                count_2++;
            j++;
        }
        j = 0;
        i++;
    }
    printf("%d\n", count_2);

   
    count_2 = 0;
    i = 0;
    j = 0;

    while (str[i])
    {
        while (vowel[j])
        {
            if (vowel[j] == str[i])
                count_2++;
            j++;
        }
        j = 0;
        i++;
    }
    printf("%d\n", count_2);

    i = 0;

    while (str[i])
    {
        if (str[i] == 'a' || str[i] == 'e'
            || str[i] == 'i' || str[i] == 'o'
            || str[i] == 'u' || str[i] == 'y')
            count += 1;
        i++;
    }
    return (count);
}

int main()
{
    char *str = "bonjour";
    printf("%d\n", count_vowels(str));
}