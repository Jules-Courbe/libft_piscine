#include "utile.h"

void	ft_print_digit(int n)
{
	char a = (n % 10) + '0';
	write(1, &a, 1);
}
