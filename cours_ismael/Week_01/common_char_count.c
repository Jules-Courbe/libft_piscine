/* Exercice 4 : Compter les caractères communs entre deux chaînes

**Énoncé :**  
Écrire une fonction `int common_char_count(const char *s1, const char *s2)` qui retourne le nombre de caractères communs entre `s1` et `s2`.  
Chaque caractère commun est compté au minimum de ses occurrences dans les deux chaînes.

**Exemple :**
common_char_count("aabbc", "adcbb"); // retourne 3 ('a', 'b', 'b')
common_char_count("abc", "xyz");     // retourne 0
*/

#include <stdio.h>

int count_occurence_in_tab(int *tab)
{
    // Compter le nombre occurence dans mon tab des alpha
    int i = 0;
    int count = 0;

    while (i <= 25)
    {
        if (tab[i] > 0)
        {
            count++;
        }
        i++;
    } 
    return (count); 
}



int common_char_count(const char *s1, const char *s2)
{
    int i;
    int j;
    int tab_alpha[25];

    i = 0;
    j = 0;

    //remplire mon tableau de 0;
    while (i <= 25)
    {
        tab_alpha[i] = 0;
        i++;
    }

    i = 0;

    //Verifier chaque caractere a une occurence
    while (s1[i])
    {
        while (s2[j])
        {
            if (s1[i] == s2[j])
            {
                tab_alpha[s1[i] - 97] += 1;
            }
            j++;
        }
        j = 0;
        i++;
    }

    return (count_occurence_in_tab(tab_alpha));

    // Une occurence vaut +1 et pas plus
    // dificulter de ne pas compter +1 a chaque fois que je recroise la lettre
    //Je pourais faire un tableau remplis de 'a' a 'z' et faire plus un 
}

int main()
{
    char *s1 = "aaaaaaaabccccccccrccccccccccddedccccd";
    char *s2 = "aaaaaaaabcderedsdde";
    printf("%d\n", common_char_count(s1, s2));
}