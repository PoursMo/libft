#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*cs;

	cs = (char *)s;
	while (n--)
		*cs++ = c;
	return (s);
}
