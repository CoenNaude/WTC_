/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnaude <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 09:47:11 by cnaude            #+#    #+#             */
/*   Updated: 2018/05/30 09:47:13 by cnaude           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			x;
	unsigned char	*udst;
	unsigned char	*usrc;

	x = 0;
	udst = (unsigned char *)dst;
	usrc = (unsigned char *)src;
	while (x < n)
	{
		udst[x] = usrc[x];
		x++;
	}
	return (dst);
}
