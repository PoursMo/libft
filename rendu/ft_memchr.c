#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*cs;

	cs = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (cs[i] == c)
			return ((void *)cs + i);
		i++;
	}
	return (NULL);
}
