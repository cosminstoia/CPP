/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstoia <cstoia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 17:14:44 by cstoia            #+#    #+#             */
/*   Updated: 2024/10/15 18:57:19 by cstoia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap	scavtrapCopy;

	ClapTrap claptrap("CLTP");
	claptrap.attack("Enemy1");
	claptrap.takeDamage(3);
	claptrap.beRepaired(2);
	claptrap.takeDamage(8);
	claptrap.attack("Enemy2");
	claptrap.beRepaired(5);
	claptrap.attack("Enemy3");
	ScavTrap scavtrap("SCTP");
	scavtrap.attack("Enemy3");
	scavtrap.takeDamage(50);
	scavtrap.beRepaired(30);
	scavtrap.guardGate();
	scavtrapCopy = scavtrap;
	ScavTrap scavtrapAssign("AnotherSCTP");
	scavtrapAssign = scavtrap;
	// claptrap.takeDamage(1); // Reduce health to 9 (10 - 1)
    // claptrap.beRepaired(2);
	return (0);
}
