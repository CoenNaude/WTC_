/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnaude <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/18 16:03:49 by cnaude            #+#    #+#             */
/*   Updated: 2018/05/18 16:03:50 by cnaude           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	x;
	size_t	len;

	x = 0;
	len = 0;
	while (dst[len] && len < size)
	{
		len++;
	}
	x = len;
	while (src[len - x] && len + 1 < size)
	{
		dst[len] = src[len - x];
		len++;
	}
	if (x < size)
	{
		dst[len] = '\0';
	}
	return (x + ft_strlen(src));
}
