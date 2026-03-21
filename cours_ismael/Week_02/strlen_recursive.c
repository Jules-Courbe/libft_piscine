// Longueur d’une string
// Interdit d’utiliser strlen
#include <stdio.h>
// je peux mettre toute ma logique dans ma fonction 

// commencer simple avec une function void qui print le result
int strlen_recursive(const char *s)
{
    // confition d'arret
    if (*s == '\0')
        return (0);
    else
        return (1 + strlen_recursive(s + 1));
}

int main()
{
    const char *s = "hello";
    printf("%d", strlen_recursive(s));
}