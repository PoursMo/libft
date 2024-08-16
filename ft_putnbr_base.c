#include "libft.h"

static void	putnbr_base(unsigned long num, const char *base_to, int baselen, int *count)
{
	if (num > 0)
	{
		putnbr_base(num / baselen, base_to, baselen, count);
		*count += ft_putchar(base_to[num % baselen]) != -1;
	}
}

int	ft_putnbr_base(long num, const char *base_to)
{
	int	count;
	int	baselen;

	if (num == 0)
		return (ft_putchar('0') != -1);
	baselen = ft_strlen(base_to);
	count = 0;
	if (num < 0)
	{
		num = -num;
		count += ft_putchar('-') != -1;
	}
	putnbr_base(num, base_to, baselen, &count);
	return (count);
}
