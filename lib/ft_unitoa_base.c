#include "../inc/lib.h"

static	unsigned int	length_n_unsigned(unsigned int n, char *base)
{
	unsigned int		length;

	length = (n == 0) ? 1 : 0;
	while (n > 0 || n < 0)
	{
		n = n / ft_strlen(base);
		length++;
	}
	return (length);
}

char					*ft_unitoa_base(unsigned int n, char *base)
{
	char				*p;
	int					size;
	unsigned int		length;

	length = length_n_unsigned(n, base);
	size = ft_strlen(base);
	if (!(p = malloc(sizeof(char) * (length + 1))))
		return (0);
	p[length] = '\0';
	while (length)
	{
		if (n < 0)
			p[--length] = base[n % size];
		else
			p[--length] = base[n % size];
		n = n / size;
	}
	return (p);
}
