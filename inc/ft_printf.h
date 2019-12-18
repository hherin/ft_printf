/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hherin <hherin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/17 16:26:13 by hherin            #+#    #+#             */
/*   Updated: 2019/12/17 17:13:07 by hherin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FT_PRINTF_H
#define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include "macro.h"
# include "lib.h"

#include <stdio.h>

typedef struct
{
	int	minus;
	int	zero;
}		s_flag;

typedef struct
{
	s_flag	flag;
	int		width;
	int		precision;
}			s_option;

typedef char* (*fct)(va_list ap, s_option opt);

typedef struct
{
	char	c;
	fct		function;
}			s_print;

int 		ft_printf(const char *format, ...);
s_option	ft_getopt(va_list ap, char **str);
s_print		*ft_struct_printf(void);

char		*ft_typeD(va_list ap, s_option opt);
char		*ft_typeS(va_list ap, s_option opt);
char		*ft_typeC(va_list ap, s_option opt);
char		*ft_typeX(va_list ap, s_option opt);
char		*ft_typeXmaj(va_list ap, s_option opt);
char		*ft_typeP(va_list ap, s_option opt);
char		*ft_typeU(va_list ap, s_option opt);
char		*ft_type_pourcent(va_list ap, s_option opt);

#endif