#include <stdlib.h>
#include <stdio.h>

char *ft_strrev_word(char *str)
{
    int i;
    char *last_word = NULL;

    i = 0;

    if (!str || !*str)
        return (NULL);

    while (str[i])
    {
        if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
            last_word = &str[i];

        i++;
    }
    return (last_word);
}

int main()
{
    char *str = "Hello world   ";
    printf("%s", ft_strrev_word(str));
}