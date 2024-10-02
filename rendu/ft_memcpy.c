#include "libft.h"

static void	*ft_mempcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*cdest;
	char	*csrc;

	cdest = (char *)dest;
	csrc = (char *)src;
	i = 0;
	while (i < n)
	{
		cdest[i] = csrc[i];
		i++;
	}
	return (dest + i);
}

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	ft_mempcpy(dest, src, n);
	return (dest);
}
