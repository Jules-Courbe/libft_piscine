#include "utile.h"
#include <stdio.h>

int     ft_atoi(char *str)
{
    int i = 0;
    int res = 0;
	int sign = 1;

	while (str[i])
    {
		while (str[i] == ' ')
			i++;
		if (str[i] == '-')
		{
			sign = -1;
			i++;
		}
		while (str[i] >= '0' && str[i] <= '9')
        {
			res = (res * 10) + (str[i] - '0');
			i++;
		}
		i++;
    }
    return (res * sign);
}
