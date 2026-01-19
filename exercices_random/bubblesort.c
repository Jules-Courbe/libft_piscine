/*********************************************/
/*   bubblesort.c*/
/*                                           */
/*   By: mr-burns*/
/*   Created: 2025/09/05 22:08:12*/
/*   Updated: 2025/09/05 22:08:12*/
/*                                           */
/*********************************************/
void	bubblesort(int *str, int n)
{
	int	i;
	int	j;
	int	temp;
	i = 0;
	j = 0;

	while (i != n - 1)
	{
		while(j < n - 1)
		{
	
			if (str[j] > str[j + 1])
			{
				temp = str[j]; 
				str[j] = str[j + 1];
				str[j + 1] = temp;
		
		j++;
			}
		}
	j = 0;
	i++;
	}
		
}
int main()
{
	int str[] = {5, 1, 6, 9, 3, 7, 4};
	bubblesort(str, 7);
}
