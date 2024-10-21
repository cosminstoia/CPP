/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstoia <cstoia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 17:29:30 by cstoia            #+#    #+#             */
/*   Updated: 2024/10/16 14:20:40 by cstoia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	type = "WrongAnimal";
	std::cout << "WrongAnimal created." << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
	type = other.type;
	std::cout << "WrongAnimal copied." << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other)
{
	if (this != &other)
	{
		type = other.type;
		std::cout << "WrongAnimal assigned." << std::endl;
	}
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destroyed." << std::endl;
}

void WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal sound." << std::endl;
}

std::string WrongAnimal::getType() const
{
	return (type);
}

WrongCat::WrongCat()
{
	type = "WrongCat";
	std::cout << "WrongCat created." << std::endl;
}

WrongCat::WrongCat(const WrongCat &other) : WrongAnimal(other)
{
	std::cout << "WrongCat copied." << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &other)
{
	if (this != &other)
	{
		WrongAnimal::operator=(other);
		std::cout << "WrongCat assigned." << std::endl;
	}
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destroyed." << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << "WrongCat sound" << std::endl;
}
