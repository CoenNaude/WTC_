/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnaude <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 10:19:19 by cnaude            #+#    #+#             */
/*   Updated: 2018/05/30 10:19:20 by cnaude           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	size_t	x;
	size_t	y;
	size_t	z;
	char	**w;

	x = 0;
	z = 0;
	if (!s || !(w = (char **)malloc(sizeof(char *) * (ft_wordcount(s, c) + 1))))
		return (NULL);
	while (x < ft_wordcount(s, c))
	{
		if (!(w[x] = (char *)malloc(sizeof(char) * (ft_wordlen(&s[z], c) + 1))))
			return (NULL);
		y = 0;
		while (s[z] == c)
			z++;
		while (s[z] != c && s[z])
			w[x][y++] = s[z++];
		w[x][y] = '\0';
		x++;
	}
	w[x] = NULL;
	return (w);
}
