# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    aff_param.php                                      :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cnaude <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/02 20:50:01 by cnaude            #+#    #+#              #
#    Updated: 2018/10/02 20:50:07 by cnaude           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

<?php
	$x = 1;
	while($x < $argc)
	{
		echo "$argv[$x]\n";
		$x++;
	}
?>