#include "libft.h"

int	ft_putstr(const char *str)
{
	int	count;

	count = 0;
	while (*str)
		count += ft_putchar(*str++) != -1;
	return (count);
}
