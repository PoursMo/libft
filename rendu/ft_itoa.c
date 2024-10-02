#include "libft.h"

char	*ft_itoa(int num)
{
	return (ft_conv_to_base(num, "0123456789"));
}
