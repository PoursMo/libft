#include "libft.h"

char	*ft_strstr(const char *str, const char *substr)
{
	size_t	substrlen;

	substrlen = ft_strlen(substr);
	if (!*substr)
		return ((char *)str);
	while (*str)
		if (!ft_memcmp(str++, substr, substrlen))
			return ((char *)str - 1);
	return (NULL);
}
