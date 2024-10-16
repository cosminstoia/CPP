#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	claptrapCopy;

	ClapTrap claptrap("CLTP");
	claptrap.attack("Enemy1");
	claptrap.takeDamage(3);
	claptrap.beRepaired(2);
	claptrap.takeDamage(8);
	claptrap.attack("Enemy2");
	claptrap.beRepaired(5);
	claptrap.attack("Enemy3");
	claptrapCopy = claptrap;
	ClapTrap claptrapAssign("AnotherCLTP");
	claptrapAssign = claptrap;
	//claptrap.takeDamage(1); // Reduce health to 9 (10 - 1)
    //claptrap.beRepaired(2);
	return (0);
}
