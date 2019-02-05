/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnaude <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 09:46:58 by cnaude            #+#    #+#             */
/*   Updated: 2018/05/30 09:46:59 by cnaude           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			x;
	unsigned char	*us1;
	unsigned char	*us2;

	x = 0;
	us1 = (unsigned char *)s1;
	us2 = (unsigned char *)s2;
	while ((x < n) && us1[x] == us2[x])
		x++;
	if (x == n)
		return (0);
	else
		return (us1[x] - us2[x]);
}
