#include <stdio.h>
#include <stdlib.h>

char	*ft_strrev_words(char *str)
{
    char res;
    int i;

    i = 0;
    res = strlen(str) + 1;

    if (!str || !*str)
        return (NULL);

    while (i >= 0)
    {
        if (str[i] != ' ')
            res = &str[i];
    }
}

int main()
{
    char *str = "    Hello world ";
    printf("%s\n", ft_strrev_words(str));

    return (0);
}