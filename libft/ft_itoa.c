/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnaude <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 11:57:31 by cnaude            #+#    #+#             */
/*   Updated: 2018/05/30 11:57:32 by cnaude           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include "libft.h"

char	*ft_itoa(int n)
{
	size_t	x;
	size_t	n_size;
	char	*str;

	x = 0;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	n_size = ft_nbrlen(n);
	str = (char *)malloc(sizeof(char) * (n_size + 1));
	if (str == 0)
		return (0);
	str[n_size] = 0;
	if (n < 0)
	{
		str[0] = '-';
		n *= -1;
		x++;
	}
	while (x < n_size--)
	{
		str[n_size] = (n % 10) + '0';
		n /= 10;
	}
	return (str);
}
