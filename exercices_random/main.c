#include <unistd.h>

void	ft_print_2digits(int n)
{
	char	a;
	char	b;

	a = (n / 10) + '0';
	b = (n % 10) + '0';
	write (1, &a, 1);
	write (1, &b, 1);
}
int main()
{
	ft_print_2digits(42);
}
