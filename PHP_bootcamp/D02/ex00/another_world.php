<?php
if ($argc > 1)
{
	$newstr = trim($argv[1]);
	while ((strpos($newstr, "  ")) == TRUE)
		$newstr = str_replace("  ", " ", $newstr);
	echo("$newstr\n");
}
?>