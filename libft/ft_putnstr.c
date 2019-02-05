/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnaude <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/23 13:05:16 by cnaude            #+#    #+#             */
/*   Updated: 2018/08/23 13:08:33 by cnaude           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <unistd.h>
#include "libft.h"

void	ft_putnstr(char const *str, size_t str_len)
{
	ft_putnstr_fd(str, str_len, STDOUT_FILENO);
}
