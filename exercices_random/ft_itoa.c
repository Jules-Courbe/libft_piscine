#include <stdio.h>
#include <stdlib.h>

char	*ft_itoa(int n)
{
    char *str;
    int tmp;
    int count_number;

    count_number = 0;
    tmp = n;

    while (n != 0)
    {
        n = (n / 10);
        count_number++;
    }

    n = tmp;

    if (n < 0)
        count_number += 1;
    
    str = malloc(sizeof(char) * count_number + 1);
    str[count_number] = '\0';

    if (n == 0)
    {
        str[0] = '0';
    }    
    
    // Need modification to not have overflow but for now it's geate
    if (n == -2147483648)
        return ("-2147483648");

    if (n < 0)
        str[0] = '-';


    count_number -= 1;
    
    while (n != 0)
    {
        if (str[count_number] != '-')
            str[count_number] = (n % 10) + '0';
        n = (n / 10);
        count_number--;
    }

    return (str);

}

int	main(int argc, char **argv)
{
	int		nb;
	char	*res;

	if (argc != 2)
		return (1);
	nb = atoi(argv[1]);
	res = ft_itoa(nb);
	if (!res)
		return (1);
	printf("%s\n", res);
	free(res);
	return (0);
}
