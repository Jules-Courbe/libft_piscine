#include "utile.h"

void	ft_uppercase(char *str)
{
	int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] -= 32;
		printf("%c", i);
        }
	printf("%c", str[i]);
	i++;
  }
}