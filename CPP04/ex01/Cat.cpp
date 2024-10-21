/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstoia <cstoia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 10:54:12 by cstoia            #+#    #+#             */
/*   Updated: 2024/10/21 09:53:55 by cstoia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
	type = "Cat";
	brain = new Brain();
	std::cout << "Cat created." << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other)
{
	brain = new Brain(*other.brain);
	std::cout << "Cat copied." << std::endl;
}

Cat &Cat::operator=(const Cat &other)
{
	if (this != &other)
	{
		Animal::operator=(other);
		if (brain)
			delete brain;
		brain = new Brain(*other.brain); 
		std::cout << "Cat assigned." << std::endl;
	}
	return (*this);
}

Cat::~Cat()
{
	delete brain;
	std::cout << "Cat destroyed." << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "Meow!" << std::endl;
}
