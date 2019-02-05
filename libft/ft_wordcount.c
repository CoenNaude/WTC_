/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wordcount.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnaude <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 10:37:50 by cnaude            #+#    #+#             */
/*   Updated: 2018/06/08 10:37:51 by cnaude           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_wordcount(const char *s, char c)
{
	size_t	x;
	size_t	w;

	x = 0;
	w = 0;
	while (s[x])
	{
		if (s[x] != c)
			w++;
		while (s[x] != c && s[x + 1])
			x++;
		x++;
	}
	return (w);
}