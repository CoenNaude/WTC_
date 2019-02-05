# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ssap.php                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cnaude <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/02 20:50:01 by cnaude            #+#    #+#              #
#    Updated: 2018/10/02 20:50:07 by cnaude           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

<?php
	if ($argc > 1)
	{
		for ($x = 1; $x < $argc; $x++)
			$string .= " ".$argv[$x]." ";
		$newstr = trim($string);
		while((strpos($newstr, "  ")) == TRUE)
			$newstr = str_replace("  ", " ", $newstr);
		$array = explode(" ", $newstr);
		sort($array);
		foreach ($array as $value)
			echo "$value\n";
	}
?>