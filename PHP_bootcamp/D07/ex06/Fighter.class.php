<?PHP
abstract class Fighter
{
	public $typee;
	abstract public function fight($fighter);
	public function __construct($newbie)
	{
		$this->typee = $newbie;
	}
}
?>