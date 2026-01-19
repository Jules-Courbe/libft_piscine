/*********************************************/
/*   ft_uppercase.c*/
/*                                           */
/*   By: mr-burns*/
/*   Created: 2025/09/10 10:17:58*/
/*   Updated: 2025/09/10 10:17:58*/
/*                                           */
/*********************************************/
#include <stdio.h> 
void	ft_uppercase(char *str)
{
	int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] -= 32;
		printf("%c", i);
        }
	printf("%c", str[i]);
	i++;
  }
}
int main()
{
	char str[] = "Tableau";
	ft_uppercase(str);
}
