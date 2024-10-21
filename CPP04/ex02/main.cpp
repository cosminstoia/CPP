/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstoia <cstoia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 17:22:00 by cstoia            #+#    #+#             */
/*   Updated: 2024/10/15 12:31:21 by cstoia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

int	main(void)
{
	const int	numAnimals = 4;
	AAnimal		*animals[numAnimals];
	Dog			originalDog;
	Dog			copiedDog;

	for (int i = 0; i < numAnimals / 2; ++i)
	{
		animals[i] = new Dog();
	}
	for (int i = numAnimals / 2; i < numAnimals; ++i)
	{
		animals[i] = new Cat();
	}
	std::cout << "\nAll animals make sound:\n";
	for (int i = 0; i < numAnimals; ++i)
	{
		animals[i]->makeSound();
	}
	std::cout << "\nDeleting all animals:\n";
	for (int i = 0; i < numAnimals; ++i)
	{
		delete animals[i];
	}
	std::cout << "\nTesting deep copy:\n";
	copiedDog = originalDog;
	return (0);
}
