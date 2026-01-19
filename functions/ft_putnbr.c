#include <unistd.h>

void	ft_print_units(int n)
{
	char	a;

	a = (n % 10) + '0';
	write(1, &a, 1);
}

int main()
{
	ft_print_units(5);
}