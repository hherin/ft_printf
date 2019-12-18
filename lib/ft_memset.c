#include "../inc/lib.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*str;
	size_t	i;
	char	w;

	i = 0;
	w = (char)c;
	str = (char*)s;
	while (i < n)
		str[i++] = w;
	return ((void*)str);
}