#include <stdlib.h>

int	ft_strlen(char *s)
{
    int i;

    i = 0;

    while (s[i])
    {
        i++;
    }
}

int	count_digits(int n)
{
    int count;
    if (n < 10)
        return (1);
    while (n > 9)
    {
        count_digits(n / 10);
        count += 1;
    }
}



char	*ft_strcompress(char *str)
{
    int i;
    int *repetition;

    repetition = 0;
    i = 0;

    if (!str || !*str)
        return (NULL);

    while (str[i])
    {
        if (str[i] == str[i + 1])
        *repetition += 1;
    }
}

int main()
{
    char *str = "aaaa";
    printf("%s\n", ft_strcompress(str));
}