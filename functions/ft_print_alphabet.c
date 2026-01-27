#include "utile.h"

void	ft_print_reverse_alphabet(void)
{
	char a;

	a = 'a';

	while (a >= 'a')
	{
		write(1, &a, 1);
		a++;
	}
}