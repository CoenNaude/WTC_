/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnaude <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/18 16:03:34 by cnaude            #+#    #+#             */
/*   Updated: 2018/05/18 16:03:35 by cnaude           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	unsigned int	x;
	size_t			len;
	char			*str;

	len = ft_strlen(src);
	if (!(str = (char*)malloc(sizeof(*str) * len + 1)))
		return (NULL);
	x = 0;
	while (x < len)
	{
		str[x] = src[x];
		x++;
	}
	str[x] = '\0';
	return (str);
}
