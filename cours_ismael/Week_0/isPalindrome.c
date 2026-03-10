#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

char *remove_spaces_upper(char *str)
{
    int i;
    char *new;
    int j = 0;

    i = 0;
    new = malloc(sizeof(*new) * strlen(str));
    
    while (str[i])
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] += 32;
        }
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= '0' && str[i] <= '9'))
        {
            new[j] = str[i];
            j++;
        }
        i++;
    }
    str[i] = '\0';


    return (new);

}

int ft_strlen(char *str)
{
    int i;

    i = 0;

    while (str[i])
    {
        i++;
    }
    return (i);
}

bool isPalindrome(char* str) {
    int i;
    int j;
    char *new;

    //dur a comprendre que new initialiser ici peut reprendre le malloc du return d'une autre fonction 
    new = remove_spaces_upper(str);


    i = 0;
    j = ft_strlen(new) -1;

    while (i < j)
    {
        if (new[i] != new[j])
            return (false);
        i++;
        j--;
    }
    return (true);
}

int main ()
{
    char s[] = " ";
    printf("%B\n", isPalindrome(s));
    // je ne sais pas comment free new dans la fonction. 
}