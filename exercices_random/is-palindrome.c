/*********************************************/
/*   is-palindrome.c*/
/*                                           */
/*   By: mr-burns*/
/*   Created: 2025/10/08 18:37:37*/
/*   Updated: 2025/10/08 18:37:37*/
/*                                           */
/*********************************************/
#include <stdio.h>

int ft_strlen(char *str)
{
	int i = 0;

	while (str[i])
	{
		i++;
	}
	return (i);
}

int is_palindrome(char *str)
{
	int i = 0;
	int j = ft_strlen(str) - 1;
 
	while (str[i])
	{ 
		if (str[i] != str[j])
		{
			return (2); 
		}
		if (str[i] == str[j])
		{
			i++;
			j--;
		}
	}
	return (0);
}

int main(int argc, char **argv)
{
	printf("%d", (is_palindrome(argv[1])));
}
