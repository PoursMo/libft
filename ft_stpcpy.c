#include "libft.h"

char	*ft_stpcpy(char *dst, const char *src)
{
	char	*p;

	p = ft_mempcpy(dst, src, ft_strlen(src));
	*p = '\0';
	return (p);
}
