#include <stdio.h>

    int got_value(char *base, char c)
    {
        int i = 0;
        while (base[i])
        {
            if (base[i] == c)
                return(i);
            i++;
        }
        return (-1);
    }

    int value_base(char *base)
    {
        int i = 0;

        while(base[i])
        {
            i++;
        }
        return (i);
    }

int	ft_atoi_base(char *str, char *base)
{
    int i = 0;
    int res = 0;
    int base_value = value_base(base);
    int sign = 1;
    int value = 0;

    while (str[i])
    {
        while (str[i] == ' ')
            i++;
        if (str[i] == '-')
        {
            sign = sign * - 1;
            i++;
        }
        value = got_value(base, str[i]);
        if (value == -1)
            return (0);
        res = res * base_value + got_value(base, str[i]);
        i++;
    }
    return (res);
}

int main(int argc, char **argv)
{
    printf("%d", ft_atoi_base(argv[1], argv[2]));
}