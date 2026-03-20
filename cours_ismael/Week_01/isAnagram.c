// Étant donné deux chaînes de caractères s et t, renvoyez true si t est un anagramme de s, et false autrement.

// paterne du prbleme : Remplissage d'un tableau representant des valeurs par le index a = 0 etc...
#include <stdbool.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

bool isAnagram(char* s, char* t) 
{
    // Verifier si les deux adresse existe bien
    if (!s || !t)
        return (false);
    // M'assurer que les deux ont la meme taille
    if (strlen(s) != strlen(t))
        return (false);

    // Initialisation des variables
    int i;
    int j;
    int index;
    int tab_s[26] = {0};
    int tab_t[26] = {0};

    i = 0;
    j = 0;
    index = 0;

    // Main function / remplissage des occurences dans les tabs

    // Pris en compte que strlen prends en compte le '\0' de fin 
    while (i <= (strlen(s) - 1))
    {
        tab_s[s[i] - 97] += 1;
        i++;
    }
    while (j <= (strlen(s) - 1))
    {
        tab_t[t[j] - 97] += 1;
        j++;
    }
    i = 0;
    j = 0;

    // Condition d'arret if (tab_s == tab_t) return true else if false 
    while (index <= 25)
    {
        if (tab_s[i] != tab_t[j])
            return (false);
        index++;
        i++;
        j++;
    }
    return (true);

}

// probleme des occurences de lettres 
// Creation de deux tableau d'entier representant l alphabet et incrementation des caracteres present 
// Condition d'arret if (tab_s == tab_t) return true else if false 

int main ()
{
    char *s = "mngra";
    char *t = "ngram";
    printf("%d\n",isAnagram(s, t));  
}