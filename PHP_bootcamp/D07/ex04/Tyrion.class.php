<?php
	class Tyrion
	{
		public function sleepWith($x)
		{
			if($x instanceof Jaime)
				print("Not even if I'm drunk !\n");
			else if($x instanceof Sansa)
				print("Let's do this.\n");
			else if($x instanceof Cersei)
				print("Not even if I'm drunk !\n");
		}
	}
?>