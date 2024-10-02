#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dup;
	size_t slen;

	slen = ft_strlen(s);
	dup = malloc(sizeof(char) * (slen + 1));
	if (!dup)
		return (NULL);
	ft_strlcpy(dup, s, slen + 1);
	return (dup);
}
