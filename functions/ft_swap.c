/*********************************************/
/*   swap.c*/
/*                                           */
/*   By: mr-burns*/
/*   Created: 2025/09/05 17:46:59*/
/*   Updated: 2025/09/05 17:46:59*/
/*                                           */
/*********************************************/
#include <stdio.h> 
int	ft_swap(int a, int b)
{
	int	temp;

	temp = a;
	a = b;
	b = temp;
	return (a);
}

int main()
{
	printf("%d", (ft_swap(2, 3)));
}
