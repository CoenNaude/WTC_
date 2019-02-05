<?php
	class Jaime
	{
		public function sleepWith($x)
		{
			if($x instanceof Tyrion)
				print("Not even if I'm drunk !\n");
			else if($x instanceof Sansa)
				print("Let's do this.\n");
			else if($x instanceof Cersei)
				print("With pleasure, but only in a tower in Winterfell, then.\n");
		}
	}
?>