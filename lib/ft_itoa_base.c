#include "../inc/lib.h"

static int		ft_nblen(unsigned int nb)
{
	int len;

	len = 0;
	if (nb >= 0 && nb < 10)
		return (1);
	while (nb > 0)
	{
		nb /= 10;
		len++;
	}
	return (len);
}

char			*ft_itoa(int n)
{
	int				len;
	char			*str;
	unsigned int	nb;

	len = (n < 0) ? ft_nblen(-n) + 1 : ft_nblen(n);
	if (!(str = (char*)malloc(sizeof(char) * len + 1)))
		return (NULL);
	nb = n;
	if (n < 0)
	{
		*str = '-';
		nb = -n;
	}
	*(str + len--) = '\0';
	while (len > (*str == '-' ? 0 : -1))
	{
		if (nb > 9)
		{
			str[len--] = (nb % 10) + '0';
			nb /= 10;
		}
		else
			str[len--] = nb + '0';
	}
	return (str);
}