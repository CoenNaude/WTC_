/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnaude <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 10:18:51 by cnaude            #+#    #+#             */
/*   Updated: 2018/05/30 10:18:52 by cnaude           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*dest;
	size_t	x;

	if (!s || !f)
		return (NULL);
	dest = ft_strdup(s);
	if (dest == NULL)
		return (NULL);
	x = 0;
	while (s[x] != '\0')
	{
		dest[x] = f(dest[x]);
		x++;
	}
	return (dest);
}
