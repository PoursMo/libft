#include "libft.h"

int	ft_putnbr(int nbr)
{
	static int	count = 0;

	if (nbr == -2147483648)
		return (ft_putstr("-2147483648"));
	if (nbr < 0)
	{
		nbr = -nbr;
		count += ft_putchar('-') != -1;
	}
	if (nbr > 9)
	{
		ft_putnbr(nbr / 10);
		count += ft_putchar(nbr % 10 + '0') != -1;
	}
	else
		count += ft_putchar(nbr + '0') != -1;
	return (count);
}
