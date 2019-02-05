/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnaude <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/18 16:02:41 by cnaude            #+#    #+#             */
/*   Updated: 2018/05/18 16:02:42 by cnaude           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int x;
	int y;

	x = 0;
	y = 0;
	if (needle[0] == '\0')
		return ((char *)&haystack[x]);
	while (haystack[x])
	{
		while ((haystack[x + y] == needle[y]) && needle[y])
			y++;
		if (needle[y] == '\0')
			return ((char *)&haystack[x]);
		y = 0;
		x++;
	}
	return (NULL);
}
