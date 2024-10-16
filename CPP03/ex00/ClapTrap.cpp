/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstoia <cstoia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 16:48:10 by cstoia            #+#    #+#             */
/*   Updated: 2024/10/15 16:01:30 by cstoia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	name = "Default";
	hitPoints = 10;
	energyPoints = 10;
	attackDamage = 0;
	std::cout << "Default constructor called for ClapTrap!" << std::endl;
}

ClapTrap::ClapTrap(const std::string &name)
{
	this->name = name;
	hitPoints = 10;
	energyPoints = 10;
	attackDamage = 0;
	std::cout << "Parameterized constructor called for ClapTrap!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
	name = other.name;
	hitPoints = other.hitPoints;
	energyPoints = other.energyPoints;
	attackDamage = other.attackDamage;
	std::cout << "Copy constructor called for ClapTrap!" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
	if (this != &other)
	{
		name = other.name;
		hitPoints = other.hitPoints;
		energyPoints = other.energyPoints;
		attackDamage = other.attackDamage;
	}
	return (*this);
	std::cout << "Assignment operator called for ClapTrap!" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called for ClapTrap!" << std::endl;
}

void ClapTrap::attack(const std::string &target)
{
	if (energyPoints > 0 && hitPoints > 0)
	{
		std::cout << "ClapTrap " << name << " attacks " << target << ",causing " << attackDamage << " damage!" << std::endl;
		energyPoints--;
	}
	else
	{
		std::cout << "ClapTrap " << name << " is too tired to attack!" << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (amount >= hitPoints)
	{
		hitPoints = 0;
		std::cout << "ClapTrap " << name << " took " << amount << " damage!" << std::endl;
	}
	else
	{
		hitPoints -= amount;
		std::cout << "ClapTrap " << name << " took " << amount << " damage and has " << hitPoints << " hit points left!" << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (hitPoints > 0 && energyPoints > 0)
	{
		if (hitPoints + amount > 10)
		{
			std::cout << "Hit points Overflow" << std::endl;
			return ;
		}
		hitPoints += amount;
		energyPoints--;
		std::cout << "ClapTrap " << name << " repaired itself for " << amount << " hit points! Current hit points: " << hitPoints << std::endl;
	}
	else
	{
		std::cout << "ClapTrap " << name << " cannot be repaired!" << std::endl;
	}
}
