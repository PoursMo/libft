#include "libft.h"

char	*ft_strcpy(char *restrict dst, const char *restrict src)
{
	ft_stpcpy(dst, src);
	return (dst);
}
