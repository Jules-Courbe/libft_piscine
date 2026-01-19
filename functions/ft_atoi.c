
#include <stdio.h>

int     ft_atoi(char *str)
{
    int i = 0;
    int res = 0;

    while (str[i])
    {
        res = (res * 10) + (str[i] - '0');
		i++;
        printf("%d\n", res);
    }
    return (res);
}

int main()
{
    printf("%d\n", (ft_atoi("56789")));
}
