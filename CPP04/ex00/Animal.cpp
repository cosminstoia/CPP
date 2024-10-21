/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstoia <cstoia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 17:23:41 by cstoia            #+#    #+#             */
/*   Updated: 2024/10/21 09:53:10 by cstoia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	type = "Animal";
	std::cout << "Animal created." << std::endl;
}

Animal::Animal(const Animal &other)
{
	type = other.type;
	std::cout << "Animal copied." << std::endl;
}

Animal &Animal::operator=(const Animal &other)
{
	if (this != &other)
	{
		type = other.type;
		std::cout << "Animal assigned." << std::endl;
	}
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Animal destroyed." << std::endl;
}

void Animal::makeSound() const
{
	std::cout << "Some animal sound." << std::endl;
}

std::string Animal::getType() const
{
	return (type);
}

Dog::Dog()
{
	type = "Dog";
	std::cout << "Dog created." << std::endl;
}

Dog::Dog(const Dog &other) : Animal(other)
{
	std::cout << "Dog copied." << std::endl;
}

Dog &Dog::operator=(const Dog &other)
{
	if (this != &other)
	{
		Animal::operator=(other);
		std::cout << "Dog assigned." << std::endl;
	}
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog destroyed." << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "Woof!" << std::endl;
}

Cat::Cat()
{
	type = "Cat";
	std::cout << "Cat created." << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other)
{
	std::cout << "Cat copied." << std::endl;
}

Cat &Cat::operator=(const Cat &other)
{
	if (this != &other)
	{
		Animal::operator=(other);
		std::cout << "Cat assigned." << std::endl;
	}
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat destroyed." << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "Meow!" << std::endl;
}
