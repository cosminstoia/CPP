/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstoia <cstoia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 17:23:41 by cstoia            #+#    #+#             */
/*   Updated: 2024/10/18 12:47:42 by cstoia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal()
{
	type = "AAnimal";
	std::cout << "AAnimal constructor called\n";
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal destructor called\n";
}

Dog::Dog() : brain(new Brain())
{
	type = "Dog";
	std::cout << "Dog constructor called\n";
}

Dog::Dog(const Dog &other) : AAnimal(other), brain(new Brain(*other.brain))
{
	std::cout << "Dog copy constructor called\n";
}

Dog &Dog::operator=(const Dog &other)
{
	delete	brain;

	std::cout << "Dog assignment operator called\n";
	if (this != &other)
	{
		AAnimal::operator=(other);
		brain = new Brain(*other.brain);
	}
	return (*this);
}

Dog::~Dog()
{
	delete	brain;
	std::cout << "Dog destructor called\n";
}

void Dog::makeSound() const
{
	std::cout << "Woof! Woof!\n";
}

AAnimal *Dog::clone() const
{
	return (new Dog(*this));
}

Cat::Cat() : brain(new Brain())
{
	type = "Cat";
	std::cout << "Cat constructor called\n";
}

Cat::Cat(const Cat &other) : AAnimal(other), brain(new Brain(*other.brain))
{
	std::cout << "Cat copy constructor called\n";
}

Cat &Cat::operator=(const Cat &other)
{
	delete	brain;
	std::cout << "Cat assignment operator called\n";
	if (this != &other)
	{
		AAnimal::operator=(other);
		brain = new Brain(*other.brain);
	}
	return (*this);
}

Cat::~Cat()
{
	delete	brain;
	std::cout << "Cat destructor called\n";
}

void Cat::makeSound() const
{
	std::cout << "Meow! Meow!\n";
}

AAnimal *Cat::clone() const
{
	return (new Cat(*this));
}
