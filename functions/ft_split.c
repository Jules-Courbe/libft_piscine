#include <stdio.h>
#include <stdlib.h>
// count_word

int count_word(char *s, char c)
{
    int i = 0;
    int inword = 0;
    int count = 0;

    while (s[i] != '\0')
    {
        if (s[i] == c)
            inword = 0;
        else if (inword == 0)
        {
            inword = 1;
            count++;
        }
        i++;
    }
    return (count);
}

// word_len

int word_len(char *s, char c)
{
    int i = 0;

    while (s[i] && s[i] != c)
    {
        i++;
    }
    return (i);
}

// Malloc + copie du mot

char *strcopymalloc(char *s, char c)
{
    char *new = NULL;
    int i = 0;

    new = malloc(sizeof(char) * (word_len(s, c) + 1));

    if (!new)
        return NULL;

    while (i < word_len(s, c))
    {
        new[i] = s[i];
        i++;
    }

    new[i] = '\0';

    return (new);
}

char **ft_split(char *s, char c)
{
    int i = 0;
    char **tab;
    int words = count_word(s, c);

    tab = malloc(sizeof(char *) * (words + 1));

    if (!tab)
        return (NULL);

    while (i < words)
    {
        while (*s == c)
            s++;
        tab[i] = strcopymalloc(s, c);

        i++;
        while (*s != c && *s != '\0')
            s++;
    }

    tab[i] = NULL;

    return (tab);

}

int main()
{
    char **tab;
    int i = 0;

    tab = ft_split("????Bonjour?le?monde", '?');

    while (tab[i] != NULL)
    {
        printf("%s\n", tab[i]);
        i++;
    }
}
