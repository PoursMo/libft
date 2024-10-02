#include "libft.h"

char	*ft_strnstr(const char *str, const char *substr, size_t n)
{
	size_t	substrlen;

	substrlen = ft_strlen(substr);
	if (!*substr)
		return ((char *)str);
    if (n < substrlen)
        return (NULL);
    while (*str && n > 0)
    {
		if (!ft_memcmp(str++, substr, substrlen))
			return ((char *)str - 1);
        n--;
    }
	return (NULL);
}
