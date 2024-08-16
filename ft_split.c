#include "libft.h"

static int	count_strs(const char *str, const char *charset)
{
	int	count;

	count = 0;
	while (*str)
	{
		while (*str && ft_strchr(charset, *str))
			str++;
		if (*str && !ft_strchr(charset, *str))
		{
			count++;
			while (*str && !ft_strchr(charset, *str))
				str++;
		}
	}
	return (count);
}

char	**ft_split(const char *str, const char *charset)
{
	char	**split;
	int		i;
	int		size;

	split = malloc(sizeof(char *) * (count_strs(str, charset) + 1));
	if (!split)
		return (NULL);
	i = 0;
	while (*str)
	{
		while (*str && ft_strchr(charset, *str))
			str++;
		if (*str && !ft_strchr(charset, *str))
		{
			size = 0;
			while (*(str + size) && !ft_strchr(charset, *(str + size)))
				size++;
			split[i] = ft_strndup(str, size);
			i++;
			while (*str && !ft_strchr(charset, *str))
				str++;
		}
	}
	split[i] = NULL;
	return (split);
}
