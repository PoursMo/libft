#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*new;

	if (nmemb * size > 2147483647)
		return (NULL);
	if (nmemb == 0 || size == 0)
		return (malloc(0));
	new = malloc(size * nmemb);
	if (!new)
		return (NULL);
	ft_bzero(new, nmemb);
	return (new);
}
