#include <unistd.h>

char	ft_putchar(char c)
{
	write(1, &c, 1);
}
char	ft_putstr(char *str)
{
	int i = 0;

	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}
