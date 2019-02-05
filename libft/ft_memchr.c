/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnaude <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 09:46:47 by cnaude            #+#    #+#             */
/*   Updated: 2018/05/30 09:46:49 by cnaude           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				x;
	unsigned const char	*us;
	unsigned char		uc;

	x = 0;
	us = (unsigned const char *)s;
	uc = (unsigned char)c;
	while (x < n)
	{
		if (us[x] == uc)
			return ((void *)&us[x]);
		x++;
	}
	return (NULL);
}
