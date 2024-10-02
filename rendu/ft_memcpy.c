#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	ft_mempcpy(dest, src, n);
	return (dest);
}
