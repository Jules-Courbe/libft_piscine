/*********************************************/
/*   ex*/
/*                                           */
/*   By: mr-burns*/
/*   Created: 2025/10/06 17:31:59*/
/*   Updated: 2025/10/06 17:31:59*/
/*                                           */
/*********************************************/
#include <stdio.h>

int str_len(char *str)
{
	int i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}
void reverse_string(char *str)
{
	int i = 0;
	int len = str_len(str);

	while (i <= len)
	{
		printf("%c", (str[len - i]));
		i++;
	}
}


int main(int argc, char **argv)
{
	char *str = "Bonjour";
	reverse_string(str);	
}
