/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnaude <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 09:46:36 by cnaude            #+#    #+#             */
/*   Updated: 2018/05/30 09:46:38 by cnaude           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
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
		if (usrc[x] == (unsigned char)c)
			return (&udst[x + 1]);
		x++;
	}
	return (NULL);
}
