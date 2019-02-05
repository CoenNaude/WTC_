<?php
	class NightsWatch
	{
		public $soldier = array();
		public function recruit($x)
		{
			$this->soldier[] = $x;
		}
		public function fight()
		{
			foreach($this->soldier as $s)
			{
				if (method_exists(get_class($s), 'fight'))
					$s->fight();
			}
		}
	}
?>