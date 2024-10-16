/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstoia <cstoia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 17:14:39 by cstoia            #+#    #+#             */
/*   Updated: 2024/10/15 18:51:45 by cstoia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("DefaultScavTrap")
{
	hitPoints = 100;
	energyPoints = 50;
	attackDamage = 20;
	maxHitPoints = 100;
	std::cout << "Default constructor called for ScavTrap!" << std::endl;
}

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name)
{
	hitPoints = 100;
	energyPoints = 50;
	attackDamage = 20;
	maxHitPoints = 100;
	std::cout << "Parameterized constructor called for ScavTrap!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other)
{
    std::cout << "Copy constructor called for ScavTrap!" << std::endl;
    *this = other;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
	if (this != &other)
		ClapTrap::operator=(other);
	return (*this);
	std::cout << "Assignment operator called for ScavTrap!" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "Destructor called for ScavTrap!" << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
	if (energyPoints > 0 && hitPoints > 0)
	{
		std::cout << "ScavTrap " << name << " attacks " << target << ",,causing " << attackDamage << " points of damage!" << std::endl;
		energyPoints--;
	}
	else if (hitPoints == 0)
		std::cout << "ScavTrap " << name << " cannot attack because it is destroyed!" << std::endl;
	else
		std::cout << "ScavTrap " << name << " cannot attack due to insufficient energy!" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << name << " is now in Gatekeeper mode!" << std::endl;
}
