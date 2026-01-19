#include <stdio.h> 
int	ft_strncmp(char *s1, char *s2, int n)
{
	int i;

	i = 0;
	while (i < n && s1[i] && s2[i] && s1[i] == s2[i])
	{
		if (n < i)
			return (0);
	i++;
	}
	if (i == n)
		i--;
		return (s1[i] - s2[i]);	
}
int main(int argc, char **argv)
{	
	printf("%d", ft_strncmp(argv[1], argv[2], 5));
}
