#include "utile.h"

void	ft_print_comb2(void)
{
	int	a;
	int	b;
	char c;
	char d;
	char e;
	char f;

	a = 0;

	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			c = (a / 10) + '0';
			d = (a % 10) + '0';
			e = (b / 10) + '0';
			f = (b % 10) + '0';
			write(1, &c, 1);
			write(1, &d, 1);
			write(1, " ", 1);
			write(1, &e, 1);
			write(1, &f, 1);
			if (!(a == 98 && b == 99))
				write(1, ", ", 2);
			b++;
		}
		a++;
	}
}