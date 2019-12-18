/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hherin <hherin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/17 17:14:55 by hherin            #+#    #+#             */
/*   Updated: 2019/12/17 17:15:20 by hherin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/lib.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*res;

	if (!(res = malloc(size * count)))
		return (NULL);
	ft_memset(res, 0, count * size);
	return (res);
}