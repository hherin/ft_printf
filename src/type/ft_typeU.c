/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_typeU.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucaslefrancq <lucaslefrancq@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/17 16:24:22 by hherin            #+#    #+#             */
/*   Updated: 2021/11/17 15:43:18 by lucaslefran      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../../inc/ft_printf.h"

static char	*ft_zeropad(char *s, char *tmp, s_option opt, size_t size)
{
	size_t	start;
	size_t	zero;
	size_t	i;
	int		abso;

	i = 0;
	if (opt.precision >= 0)
	{
		zero = (opt.precision > (int)ft_strlen(s)) ? opt.precision - ft_strlen(s) : 0;
		start = (opt.flag.minus || opt.width < 0) ? 0 : size - FT_MAX(opt.precision, (int)ft_strlen(s));
		while (i++ < zero)
			tmp[start++] = '0';
		i = 0;
		while (i < ft_strlen(s))
			tmp[start++] = s[i++];
	}
	else
	{
		abso = (opt.width < 0) ? (int)ft_strlen(s) : opt.width;
		zero = (opt.flag.zero) ? abso - ft_strlen(s): 0;
		start = (opt.flag.minus || opt.width < 0) ? 0 : size - FT_MAX(ft_strlen(s), zero);
		while (i++ < zero)
			tmp[start++] = '0';
		i = 0;
		while (i < ft_strlen(s))
			tmp[start++] = s[i++];
	}
	return (tmp);
}

static char	*ft_optschoose(s_option opt, char *s)
{
	char	*tmp;
	size_t	size;
	int		abso;

	abso = (opt.width < 0) ? -opt.width : opt.width;
	size = FT_MAX(opt.precision , abso);
	if (size < ft_strlen(s))
		return (s);
	tmp = malloc(sizeof(char) * size + 1);
	tmp[size] = '\0';
	tmp = ft_memset(tmp, ' ', size);
	tmp = ft_zeropad(s, tmp, opt, size);
	free(s);
	return (tmp);
}

char		*ft_typeU(va_list ap, s_option opt)
{
	char	*str;

	str = ft_unitoa_base(va_arg(ap, unsigned int), "0123456789");
	str = ft_optschoose(opt, str);
	return (str);
}