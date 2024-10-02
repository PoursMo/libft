#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	srclen;
	size_t	i;

	srclen = ft_strlen(src);
	i = size;
	while (--i)
	{
		*dst++ = *src++;
		if (!*src)
			break ;
	}
	if (i == 0 && size)
		*dst = '\0';
	return (srclen);
}
