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
        false;

    // Initialisation des variables
    int i;
    int j;
    int index;
    int tab_s[25];
    int tab_t[25];

    i = 0;
    j = 0;
    index = 0;
    // Remplissage des tabs d'entiers sinon depend des valeurs en memoirs, peut alterer le resultat
    while (i <= 25)
    {
        tab_s[i] = 0;
        tab_t[j] = 0;
        i++;
        j++;
    }
    i = 0;
    j = 0;

    //remplire avec les vraies valeurs 
    while (i <= 6)
    {
        tab_s[s[i] - 97] += 1;
        i++;
    }
    while (j < 6)
    {
        tab_t[t[j] - 97] += 1;
        j++;
    }
    i = 0;
    j = 0;
    while (i <= 25)
    {
        printf("%d", tab_s[i]);
        i++;
    }
    printf("\n");
    while (i <= 25)
    {
        printf("%d", tab_s[j]);
        i++;
    }
    printf("\n");
    while (j <= 25)
    {
        printf("%d", tab_t[j]);
        j++;
    }
    // Remise a 0 des index
    printf("\n");
    i = 0;
    j = 0;
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
int *tab(void)
{
    int tab[2];

    tab[0] = 1;
    tab[1] = 2;

    return (tab);
}
int main ()
{
    char *s = "mmngra";
    char *t = "ngmram";
    printf("%d\n",isAnagram(s, t));  

    printf("\n%ls", tab);
}