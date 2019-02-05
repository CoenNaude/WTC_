/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncmp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnaude <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/18 15:33:18 by cnaude            #+#    #+#             */
/*   Updated: 2018/05/18 15:33:21 by cnaude           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *str1, const char *str2, size_t n)
{
	unsigned char *x;
	unsigned char *y;

	x = (unsigned char *)str1;
	y = (unsigned char *)str2;
	if (n == 0)
		return (0);
	while ((*x == *y) && (*x != '\0') && (*y != '\0')
		&& (--n))
	{
		x++;
		y++;
	}
	return (*x - *y);
}
