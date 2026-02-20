#include <stdio.h>

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_strisrotation(char *s1, char *s2)
{
	int	len;
	int	k;
	int	i;

	if (!s1 && !s2)
		return (1);
	if (!s1 || !s2)
		return (0);

	len = ft_strlen(s1);
    
	if (len != ft_strlen(s2))
		return (0);
	if (len == 0)
		return (1);
	k = 0;
	while (k < len)
	{
		i = 0;
		while (i < len && s1[(i + k) % len] == s2[i])
			i++;
		if (i == len)
			return (1);
		k++;
	}
	return (0);
}

int	main(void)
{
	char *s1 = "abcde";
	char *s2 = "cdeab";

	printf("%d\n", ft_strisrotation(s1, s2));
	return (0);
}

