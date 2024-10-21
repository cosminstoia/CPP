/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstoia <cstoia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 17:22:00 by cstoia            #+#    #+#             */
/*   Updated: 2024/10/17 12:00:01 by cstoia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"

int	main(void)
{
	const Animal	*j = new Dog();
	const Animal	*i = new Cat();
	delete			i;

	delete j; // should not create a leak
	return (0);
}

// int	main(void)
// {
// 	Dog	dog1;
// 	Dog	dog3;
// 	Dog	dog5;
// 	Cat	cat1;
// 	Cat	cat3;
// 	Cat	cat5;

// 	std::cout << "Creating a Dog object:\n";
// 	dog1.makeSound();
// 	std::cout << "\nCreating a copy of Dog (copy constructor):\n";
// 	Dog dog2(dog1);
// 	dog2.makeSound();
// 	std::cout << "\nAssigning a Dog object (copy assignment operator):\n";
// 	dog3 = dog1;
// 	dog3.makeSound();
// 	std::cout << "\nMoving a Dog object (move constructor):\n";
// 	Dog dog4(std::move(dog1));
// 	dog4.makeSound();
// 	std::cout << "\nAssigning a moved Dog object (move assignment operator):\n";
// 	dog5 = std::move(dog2);
// 	dog5.makeSound();
// 	std::cout << "\nCreating a Cat object:\n";
// 	cat1.makeSound();
// 	std::cout << "\nCreating a copy of Cat (copy constructor):\n";
// 	Cat cat2(cat1);
// 	cat2.makeSound();
// 	std::cout << "\nAssigning a Cat object (copy assignment operator):\n";
// 	cat3 = cat1;
// 	cat3.makeSound();
// 	std::cout << "\nMoving a Cat object (move constructor):\n";
// 	Cat cat4(std::move(cat1));
// 	cat4.makeSound();
// 	std::cout << "\nAssigning a moved Cat object (move assignment operator):\n";
// 	cat5 = std::move(cat2);
// 	cat5.makeSound();
// 	std::cout << "\nDestructors will be called as objects go out of scope.\n";
// 	return (0);
// }
