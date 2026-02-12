#include "utile.h"

void	ft_foreach(int *tab, int length, void (*f) (int), void (*f1) (int))
{
	int i;

	i = 0;
	while (i < length)
	{
		(*f)(tab[i]);
		i++;
	}
	i = 0;
	while (i < length)
	{
		(*f1)(tab[i]);
		i++;
	}
}