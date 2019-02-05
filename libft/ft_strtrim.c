/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnaude <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 10:19:34 by cnaude            #+#    #+#             */
/*   Updated: 2018/05/30 10:19:35 by cnaude           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	x;
	size_t	y;
	char	*str;

	if (!s)
		return (NULL);
	x = 0;
	y = 0;
	while (s[x] && ft_iswspace(s[x]))
		x++;
	y = ft_strlen(&s[x]) - 1;
	while (s[x] && ft_iswspace(s[y + x]))
		y--;
	if (!(str = ft_strnew(y + 1)))
		return (NULL);
	ft_strncpy(str, (s + x), (y + 1));
	return (str);
}
