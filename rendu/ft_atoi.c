#include "libft.h"

static int	ft_isspace(int c)
{
	return ((c >= 9 && c <= 13) || c == 32);
}

int	ft_atoi(const char *nptr)
{
	int	mult;
	int	num;

	mult = 1;
	while (*nptr && ft_isspace(*nptr))
		nptr++;
	if (*nptr == '+' || *nptr == '-')
	{
		if (*nptr == '-')
			mult = -1;
		nptr++;
	}
	num = 0;
	while (*nptr && ft_isdigit(*nptr))
	{
		num = num * 10 + (*nptr - 48);
		nptr++;
	}
	return (num * mult);
}
