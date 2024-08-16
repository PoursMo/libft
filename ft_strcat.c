#include "libft.h"

char	*ft_strcat(char *restrict dst, const char *restrict src)
{
	ft_stpcpy(dst + ft_strlen(dst), src);
	return (dst);
}
