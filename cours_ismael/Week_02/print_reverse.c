/*Afficher une string à l’envers
Affiche les caractères inversés
*/
#include <stdio.h>

void print_reverse(const char *s)
{
    if (*s == '\0')
    {
        return;
    }

    print_reverse(s + 1);

    printf("%c", s[0]);
}
// abc 
// bc
// c
// '\0'
int main()
{
    const char *s = "abc";
    print_reverse(s);
}