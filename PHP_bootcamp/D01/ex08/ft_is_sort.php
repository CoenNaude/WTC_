# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_is_sort.php                                     :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cnaude <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/02 20:50:01 by cnaude            #+#    #+#              #
#    Updated: 2018/10/02 20:50:07 by cnaude           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

<?php
function ft_is_sort($tab)
{
	$array = $tab;
	sort($test);
	$argument = 0;
	$wordnbr = count($array);
	for($x = 0; $x < $wordnbr; $x++)
		if ($test[$i] != $tab[$i])
			$argument = 1;
	if ($argument == 1)
		return (0);
	else
		return (1);
}
?>