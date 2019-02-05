<?PHP
class								UnholyFactory
{
	public							$soldier = false;
	public							$archer = false;
	public							$assassin = false;
	public function					absorb($new)
	{
		if ($new->typee === "foot soldier")
		{
			if ($this->soldier)
				print("(Factory already absorbed a fighter of type foot soldier)\n");
			else
				print("(Factory absorbed a fighter of type foot soldier)\n");
			$this->soldier = true;
		}
		else if ($new->typee === "archer")
		{
			if ($this->archer)
				print("(Factory already absorbed a fighter of type archer)\n");
			else
				print("(Factory absorbed a fighter of type archer)\n");
			$this->archer = true;
		}
		else if ($new->typee === "assassin")
		{
			if ($this->assassin)
				print("(Factory already absorbed a fighter of type assassin)\n");
			else
				print("(Factory absorbed a fighter of type assassin)\n");
			$this->assassin = true;
		}
		else
			print("(Factory can't absorb this, it's not a fighter)\n");
	}
	public function					fabricate($fighter)
	{
		if ($fighter !== "foot soldier" && $fighter !== "archer" && $fighter !== "assassin")
		{
			print("(Factory hasn't absorbed any fighter of type ".$fighter.")\n");
			return (NULL);
		}
		else
		{
			print("(Factory fabricates a fighter of type ".$fighter.")\n");
			if ($fighter === "foot soldier")
				return (new Footsoldier());
			if ($fighter === "archer")
				return (new Archer());
			if ($fighter === "assassin")
				return (new Assassin());
		}
	}
}
?>