/*Exercice 4 : Trouver le caractère le plus fréquent

Objectif : Combiner pointeurs et tableau de compte.

Écrire une fonction char most_frequent_char(const char *str) qui retourne le caractère apparaissant le plus dans une chaîne.
// c = 'g'
*/
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int count_frequent_char(const char *str, char c)
{
    int count;
    int i;

    i = 0;
    count = 0;

    while (str[i])
    {
        if (str[i] == c)
            count++;
        i++;
    }
    return (count);
}

char most_frequent_char(const char *str)
{
    //Systeme de tri sur deux entier qui se compare et qui garde le plus grand et si ego jsp encore 
    int i;
    int max_count = 0;
    int current_count;
    char best_char;


    i = 0;

    //verifier si str existe bien en memoire et n'est pas NULL
    if (!str)
        return (0);

    //prendre deux valeur et les comparer pour trouver la plus grande
    while (str[i])
    {
        current_count = count_frequent_char(str, str[i]);
    //Je veux que rentre dans cette condition uniquement les valeurs superieurs a max count sinon je passe et si tout est inferieur retourner le premier caractere
        if (current_count > max_count)
        {
            max_count = current_count;
            best_char = str[i];
        }
        i++;
    }
    return (best_char);
}

int main()
{
    const char s[] = "aaaaaaaaabbbbbbbbbbbbbbbeeeeeeeeeeeeeeeeeeeeenbbbbbbbbbbbbbbbbbbbbbbbb";
    printf("%c",most_frequent_char(s));
}