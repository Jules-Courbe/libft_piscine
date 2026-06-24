#include "utile.h"

char	*ft_strdup(const char *src)
{
	char *dest;

	dest = malloc(sizeof(char) * ft_strlen(src) + 1);
	if (!dest)
		return (NULL);

	ft_strcpy(dest, src);

	return (dest);
}