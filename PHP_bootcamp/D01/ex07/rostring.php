# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    rostring.php                                       :+:      :+:    :+:    #
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
		$string = $argv[1];
		while ((strpos($string, "  ")) == TRUE)
			$string = str_replace("  ", " ", $string);
		$array = explode(" ", $string);
		$wordnbr = count($array);

		for($x = 1; $x < $wordnbr; $x++)
			echo $array[$x]." ";
		echo $array[0]."\n";
	}
?>