/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnaude <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/18 16:03:22 by cnaude            #+#    #+#             */
/*   Updated: 2018/05/18 16:03:24 by cnaude           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		x;

	x = 0;
	while (s[x] && s)
	{
		if ((char)s[x] == c)
		{
			return ((char *)&s[x]);
		}
		x++;
	}
	if ((char)c == s[x])
	{
		return ((char *)s + x);
	}
	return (NULL);
}
