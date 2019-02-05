/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnaude <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/23 13:04:03 by cnaude            #+#    #+#             */
/*   Updated: 2018/08/23 13:04:05 by cnaude           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int faktoriaal;

	faktoriaal = 1;
	if (nb < 0 || nb >= 13)
	{
		return (0);
	}
	while (nb > 0)
	{
		faktoriaal = faktoriaal * nb;
		nb--;
	}
	return (faktoriaal);
}
