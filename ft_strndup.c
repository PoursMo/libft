#include "libft.h"

char	*ft_strndup(const char *s, size_t n)
{
	char	*dup;
	size_t	size;

	if (n > ft_strlen(s))
		size = ft_strlen(s);
	else
		size = n;
	dup = malloc(sizeof(char) * (size + 1));
	if (!dup)
		return (NULL);
	*(char *)ft_mempcpy(dup, s, size) = '\0';
	return (dup);
}
