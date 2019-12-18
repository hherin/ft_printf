#include "../inc/lib.h"

int		ft_atoi(const char *str)
{
	int	nb;
	int	sign;

	nb = 0;
	sign = 1;
	while (FT_ISSPACE(*str))
		str++;
	sign = (*str == '-') ? -1 : 1;
	while (FT_ISDIGIT(*str))
	{
		nb = nb * 10 + *str - '0';
		str++;
	}
	return (nb * sign);
}