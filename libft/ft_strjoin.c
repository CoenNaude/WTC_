/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnaude <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 10:18:38 by cnaude            #+#    #+#             */
/*   Updated: 2018/05/30 10:18:41 by cnaude           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char		*s3;
	size_t		x;
	size_t		y;

	x = 0;
	y = 0;
	if (!s1 || !s2)
		return (NULL);
	s3 = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!s3)
		return (NULL);
	while (s1[x])
	{
		s3[x] = s1[x];
		x++;
	}
	while (s2[y])
	{
		s3[x] = s2[y];
		x++;
		y++;
	}
	s3[x] = '\0';
	return (s3);
}
