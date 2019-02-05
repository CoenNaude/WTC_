# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    oddeven.php                                        :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cnaude <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/02 20:50:29 by cnaude            #+#    #+#              #
#    Updated: 2018/10/02 20:50:31 by cnaude           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

<?php
	function odd_or_even()
	{
		echo "Enter a number: ";
		$x = trim(fgets(STDIN));
		if(is_numeric($x))
		{
			if($x % 2 == 0)
				echo "The number $x is even\n";
			else
				echo "The number $x is odd\n";
			odd_or_even();
		}
		else
		{
			if(feof(STDIN))
			{
				echo "\n";
				exit();
			}
			else
				echo "'$x' is not a number\n";;
			odd_or_even();
		}
	}
	odd_or_even();
?>