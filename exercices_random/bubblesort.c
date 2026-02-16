#include <stdio.h>

void bubblesort(int *str, int n)
{
	int	i;
	int	j;
	int	tmp;
	i = 0;
	j = 0;

	while (i < n - 1)
	{
		while (j < n - 1)
		{
			if (str[j] > str[j + 1])
			{
				tmp = str[j];
				str[j] = str[j + 1];
				str[j + 1] = tmp;
			}
			if (str[j] < str[j + 1])
				j++;
			else 
				j++;
		}
		j = 0;
		i++;
	}

	i = 0;

	while ( i < n)
	{
		printf("%d", str[i]);
		i++;
	} 
}
int main()
{
	int str[] = {1, 3, 5 ,5 ,7 ,4, 6};
	bubblesort(str, 7);
}
