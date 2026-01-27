#include "utile.h"

void	ft_putnbr(int n)
{
	int i;

	i = 0;

	while (i < ft_strlen(n))
	{
		printf("%d", i);
		i++;
	}
}