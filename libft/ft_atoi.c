/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnaude <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/18 13:51:26 by cnaude            #+#    #+#             */
/*   Updated: 2018/05/18 13:51:28 by cnaude           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int		x;
	int		sign;
	int		nbr;

	x = 0;
	sign = 1;
	nbr = 0;
	if (!str[x])
		return (0);
	while (ft_isspace(str[x]))
		x++;
	if (str[x] == '-' || str[x] == '+')
		if (str[x++] == '-')
			sign = -1;
	while (str[x] >= '0' && str[x] <= '9')
		nbr = (nbr * 10) + (str[x++] - '0');
	return (nbr * sign);
}
