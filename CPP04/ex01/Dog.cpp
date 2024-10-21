/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstoia <cstoia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 10:53:09 by cstoia            #+#    #+#             */
/*   Updated: 2024/10/21 09:54:09 by cstoia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	type = "Dog";
	brain = new Brain();
	std::cout << "Dog created." << std::endl;
}

Dog::Dog(const Dog &other) : Animal(other)
{
	brain = new Brain(*other.brain);
	std::cout << "Dog copied." << std::endl;
}

Dog &Dog::operator=(const Dog &other)
{
	if (this != &other)
	{
		Animal::operator=(other);
		if (brain)
			delete brain;
		brain = new Brain(*other.brain);
		std::cout << "Dog assigned." << std::endl;
	}
	return (*this);
}

Dog::~Dog()
{
	delete	brain;
	std::cout << "Dog destroyed." << std::endl;
}
void Dog::makeSound() const
{
	std::cout << "Woof!" << std::endl;
}