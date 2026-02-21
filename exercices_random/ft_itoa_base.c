#include <stdio.h>
#include <stdlib.h>

char	*ft_itoa_base(int n, int base)
{
    char *str;
    int i;
    int len;
    int tmp;
    int digit;
    char all_base[37] = {"0123456789abcdefghijklmnopqrstuvwxyz"};

    len = 0;

    if (base < 2 || base > 36)
        return (NULL);
    
     if (n == 0)
    {   
        str = malloc(sizeof(*str) * 2);
        if (str == NULL)
            return (NULL);
        str[0] = '0';
        str[1] = '\0';
        return (str);
    }
        

    tmp = n;

    while (n != 0)
    {
        n = (n / base);
        len++;
    }

    n = tmp;

    str = malloc(sizeof(*str) * len + 1);
    if (str == NULL)
        return (NULL);

    str[len] = '\0';

    i = len - 1;

    while (n != 0)
    {
        digit = (n % base);
        str[i] = all_base[digit];
        n = n / base;
        i--;
        }
    return (str);

}

int main()
{
    int base = 36;
    int n = 4095;
    printf("%s", ft_itoa_base(n, base));
}   