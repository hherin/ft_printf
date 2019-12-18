/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hherin <hherin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/17 16:26:04 by hherin            #+#    #+#             */
/*   Updated: 2019/12/17 22:29:31 by hherin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef LIB_H
#define LIB_H

# include <stdlib.h>
# include <unistd.h>
# include "macro.h"


void	ft_putstr(char *str);
void	ft_putchar(char c);
int		ft_atoi(const char *str);
char	*ft_itoa(int n);
size_t	ft_strlen(const char *str);
void	*ft_memset(void *s, int c, size_t n);
char	*ft_unitoa_base(unsigned int n, char *base);
char	*ft_strncpy(char *dest, char const *src, size_t n);
char	*ft_itoahexa(long n);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_substr(char const *s, unsigned int start, size_t len);
void	*ft_calloc(size_t count, size_t size);

#endif