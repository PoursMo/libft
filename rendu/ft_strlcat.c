#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	ret;

	ret = ft_strlen(dst) + ft_strlen(src);
	while (--size && *dst)
		dst++;
	if (size == 0)
		return (ret);
	while (size-- && *src)
		*dst++ = *src++;
	*dst = '\0';
	return (ret);
}
