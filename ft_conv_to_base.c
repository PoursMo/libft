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

char	*ft_conv_to_base(long num, const char *base_to)
{
	char	*conv;
	int		minus;
	int		baselen;
	int		convlen;
	int		i;

	if (num == 0)
		return ("0");
	baselen = ft_strlen(base_to);
	minus = 0;
	if (num < 0)
	{
		num = -num;
		minus = 1;
	}
	convlen = get_size(num, baselen);
	conv = malloc(sizeof(char) * (convlen + 1 + minus));
	if (!conv)
		return (NULL);
	if (minus)
		conv[0] = '-';
	i = convlen - 1 + minus;
	while (num > 0)
	{
		conv[i] = base_to[num % baselen];
		i--;
		num /= baselen;
	}
	conv[convlen + minus] = '\0';
	return (conv);
}
