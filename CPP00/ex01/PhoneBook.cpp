/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstoia <cstoia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 10:21:25 by cstoia            #+#    #+#             */
/*   Updated: 2024/10/07 11:50:03 by cstoia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>

PhoneBook::PhoneBook() : currentIndex(0)
{
}
PhoneBook::PhoneBook(const PhoneBook &other)
{
	*this = other;
}

PhoneBook &PhoneBook::operator=(const PhoneBook &other)
{
	if (this != &other)
	{
		this->currentIndex = other.currentIndex;
		for (int i = 0; i < 8; i++)
		{
			this->contacts[i] = other.contacts[i];
		}
	}
	return (*this);
}

PhoneBook::~PhoneBook()
{
}

void PhoneBook::addContact()
{
	Contact	newContact;

	if (newContact.setContact())
	{
		contacts[currentIndex] = newContact;
		currentIndex = (currentIndex + 1) % 8;
	}
}

void PhoneBook::searchContact() const
{
	int index;
	std::cout << "Enter the index of the contact to view details: ";
	std::cin >> index;
	std::cin.ignore();

	if (index >= 1 && index <= 8)
		contacts[index - 1].displayContactDetails();
	else
		std::cout << "Invalid index. Please try again.\n";
}