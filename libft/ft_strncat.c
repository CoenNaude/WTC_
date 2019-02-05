/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnaude <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/18 15:44:17 by cnaude            #+#    #+#             */
/*   Updated: 2018/05/18 15:44:20 by cnaude           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	size_t x;
	size_t y;

	x = 0;
	y = 0;
	while (dest[x])
		x++;
	while (src[y] && (y < n))
	{
		dest[x + y] = src[y];
		y++;
	}
	dest[x + y] = '\0';
	return (dest);
}
