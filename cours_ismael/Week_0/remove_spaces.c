/*Exercice 5 : Supprimer tous les espaces d’une chaîne

Objectif : Manipuler une chaîne en place via des pointeurs.

Écrire une fonction void remove_spaces(char *str) qui supprime tous les espaces ' ' d’une chaîne.

La fonction doit modifier la chaîne directement (pas de nouvelle allocation).

Exemple :

char s[] = "C est un test";
remove_spaces(s);  // s devient "Cestuntest    "*/
#include <stdio.h>
#include <unistd.h>

void remove_spaces(char *str)
{
    int left = 0; //if trouve un espace il devra copier right dans  espace 
    int right = 0; // saute les espaces

    while (str[right])
    {
        if (str[right] != ' ')
        {
            str[left] = str[right];
            left++;
        }
        right++;
    }
    str[left] = '\0';
}

int main()
{
    char str[] = "h world";
    remove_spaces(str);
    printf("%s\n", str);
}