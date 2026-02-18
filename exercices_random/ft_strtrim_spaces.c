#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int ft_strlen(char *str)
{
	int i = 0;
	while(str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strtrim_spaces(char *str)
{
    int i;
    int j;
    int deb;
    int fin;
    char *new;

    j = 0;
    fin = 0;
    deb = 0;

    if (!str)
    return (NULL);


    while ((str[deb] == ' ' || str[deb] == '\t'))
    {
        deb++;
    }

    if (str[deb] == '\0')
        {
            new = malloc(sizeof(*new) * 1);
            if (new == NULL)
                return (NULL);
            new[0] = '\0';
            return (new);
        }
    
    while (str[fin] != '\0')
    {
        fin++;
    }
    while (fin > 0 && (str[fin -1] == ' ' || str[fin - 1] == '\t'))
    {
        fin--;
    }
    
    i = deb;

    new = malloc(sizeof(*new) * (fin - deb) + 1);
    if (new == NULL)
        return (NULL);

    while (i < fin)
    {
    while ((i + 1 < fin) &&
           ((str[i] == ' ' && str[i + 1] == ' ') ||
            (str[i] == '\t' && str[i + 1] == '\t') &&
            (str[i] == ' \t' && str[i + 1] == ' \t')))
        i++;
    new[j] = str[i];
    j++;
    i++;
    }
    new[j] = '\0';
    return (new);
}

int main()
{
    char str[] = "\t\t42\t\tNetwork\t ";
    
    printf("%s\n", ft_strtrim_spaces(str));
}