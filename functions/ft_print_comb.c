#include "utile.h"

void	ft_print_comb(void)
{
	char a;
	char b;
	char c;

	a = '0';

	while (a <= '7')
	{
		b = a + 1;
		while (b <= '8')
		{
			c = b + 1;
			while(c <= '9')
			{
				printf("a = %c", a);
				printf("b = %c", b);
				printf("c = %c\n", c);

				if (!(a == '7' && b == '8' && c == '9'))
					{
						write(1, ", ", 2);
					}
				c++;
			}
			b++;
		}
		a++;
	}

}