#include "utile.h"

int     ft_atoi(char *str)
{
    int i = 0;
    int res = 0;
	int sign = 1;

	while (str[i])
    {
		if (str[i] == ' ')
			i++;
		if (str[i] == '-')
		{
			sign = -1;
			i++;
		}
		if (str[i] < '0' || str[i] > '9')
			i++;
        res = (res * 10) + (str[i] - '0');
		i++;
    }
    return (res * sign);
}