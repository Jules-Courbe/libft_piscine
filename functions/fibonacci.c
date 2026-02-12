#include "utile.h"

int	fibonacci(int index)
{
	if (index < 0)
	{
		return (-1);
	}
	else if (index == 0)
	{
		return (0);
	}
	else if (index == 1)
	{
		return (1);
	}
	else
	{
		printf("appel fibonacci(%d)\n", index);

		return (fibonacci(index - 2) + fibonacci(index - 1));
	}
	return (0);
}