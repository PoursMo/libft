#include "libft.h"

static int	get_size(long num, int baselen)
{
	int	size;

	size = 0;
	while (num > 0)
	{
		size++;
		num /= baselen;
	}
	return (size);
}

char	*ft_conv_to_base(unsigned long num, const char *base_to)
{
	char	*conv;
	int		baselen;
	int		convlen;
	int		i;

	if (num == 0)
		return ("0");
	baselen = ft_strlen(base_to);
	convlen = get_size(num, baselen);
	conv = malloc(sizeof(char) * (convlen + 1));
	if (!conv)
		return (NULL);
	i = convlen - 1;
	while (num > 0)
	{
		conv[i] = base_to[num % baselen];
		i--;
		num /= baselen;
	}
	conv[convlen] = '\0';
	return (conv);
}
