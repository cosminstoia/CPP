/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstoia <cstoia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 17:55:38 by cstoia            #+#    #+#             */
/*   Updated: 2024/10/15 18:59:12 by cstoia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("DefaultFragTrap")
{
	hitPoints = 100;
	energyPoints = 100;
	attackDamage = 30;
	maxHitPoints = 100;
	std::cout << "Default constructor called for FragTrap!" << std::endl;
}

FragTrap::FragTrap(const std::string &name) : ClapTrap(name)
{
	hitPoints = 100;
	energyPoints = 100;
	attackDamage = 30;
	maxHitPoints = 100;
	std::cout << "Parameterized constructor called for FragTrap!" << std::endl;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other)
{
	hitPoints = other.hitPoints;
	energyPoints = other.energyPoints;
	attackDamage = other.attackDamage;
	maxHitPoints = other.maxHitPoints;
	std::cout << "Copy constructor called for FragTrap!" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &other)
{
	if (this != &other)
	{
		ClapTrap::operator=(other);
		hitPoints = other.hitPoints;
		energyPoints = other.energyPoints;
		attackDamage = other.attackDamage;
		maxHitPoints = other.maxHitPoints;
		std::cout << "Copy assignment operator called for FragTrap!" << std::endl;
	}
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "Destructor called for FragTrap!" << std::endl;
}

void FragTrap::attack(const std::string &target)
{
	if (energyPoints > 0 && hitPoints > 0)
	{
		std::cout << "FragTrap " << name << " launches an attack on " << target << " ,dealing " << attackDamage << " damage!" << std::endl;
		energyPoints--;
	}
	else
	{
		std::cout << "FragTrap " << name << " has no energy or is too damaged to attack!" << std::endl;
	}
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap high fives guys!" << std::endl;
}
