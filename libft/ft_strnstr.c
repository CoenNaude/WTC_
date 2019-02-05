/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnaude <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 09:54:01 by cnaude            #+#    #+#             */
/*   Updated: 2018/05/30 09:54:23 by cnaude           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t		x;
	size_t		y;

	x = 0;
	y = 0;
	while (big[x] && (x < len))
	{
		while ((big[x + y] == little[y]) && little[y] && ((x + y) < len))
		{
			y++;
		}
		if (little[y] == '\0')
		{
			return ((char *)&big[x]);
		}
		y = 0;
		x++;
	}
	if (little[0] == '\0')
	{
		return ((char *)&big[x]);
	}
	return (NULL);
}
