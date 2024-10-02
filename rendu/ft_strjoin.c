#include "libft.h"

char	*ft_strjoin(const char *str1, const char *str2)
{
	char	*join;

	join = malloc(sizeof(char) * (ft_strlen(str1) + ft_strlen(str2) + 1));
	if (!join)
		return (NULL);
	ft_strcat(join, str1);
	ft_strcat(join, str2);
	return (join);
}
