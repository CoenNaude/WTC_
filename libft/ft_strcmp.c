/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnaude <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/18 15:05:36 by cnaude            #+#    #+#             */
/*   Updated: 2018/05/18 15:05:39 by cnaude           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *str1, const char *str2)
{
	int x;

	x = 0;
	while ((str1[x] == str2[x]) && (str1[x] != '\0') && (str2[x] != '\0'))
	{
		x++;
	}
	return ((unsigned char)str1[x] - (unsigned char)str2[x]);
}
