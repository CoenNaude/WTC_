/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrbase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnaude <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/23 13:06:33 by cnaude            #+#    #+#             */
/*   Updated: 2018/08/23 13:07:45 by cnaude           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	ft_putnbrbase(uintmax_t nbr, char *base)
{
	ft_putnbrbase_fd(nbr, base, STDOUT_FILENO);
}
