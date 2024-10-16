#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	// Create ClapTrap
	ClapTrap clap("Clap");
	clap.attack("target");
	// Create ScavTrap
	ScavTrap scav("Scav");
	scav.attack("target");
	// Create FragTrap
	FragTrap frag("Frag");
	frag.attack("target");
	frag.highFivesGuys();
	// Simulating some actions
	scav.takeDamage(5);
	scav.beRepaired(3);
	frag.takeDamage(50);
	frag.beRepaired(20);
	//clap.takeDamage(1); // Reduce health to 9 (10 - 1)
	//clap.beRepaired(2);
	return (0);
}
