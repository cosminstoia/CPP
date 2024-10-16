/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstoia <cstoia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 09:54:00 by cstoia            #+#    #+#             */
/*   Updated: 2024/10/11 14:41:47 by cstoia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>

Contact::Contact()
{
}

Contact::~Contact()
{
}

bool Contact::setContact()
{
	std::cout << "Enter first name: ";
	getline(std::cin, firstName);
	std::cout << "Enter last name: ";
	getline(std::cin, lastName);
	std::cout << "Enter nickname: ";
	getline(std::cin, nickName);
	std::cout << "Enter phone number: ";
	getline(std::cin, phoneNumber);
	std::cout << "Enter darkest secret: ";
	getline(std::cin, darkestSecret);
	if (firstName.empty() || lastName.empty() || nickName.empty()
		|| phoneNumber.empty() || darkestSecret.empty())
	{
		std::cout << "Error:\nAll fields must be filled.\n";
		return (false);
	}
	return (true);
}


void Contact::displayContactDetails() const
{
	std::cout << "First name: " << firstName << std::endl;
	std::cout << "Last name: " << lastName << std::endl;
	std::cout << "Nickname: " << nickName << std::endl;
	std::cout << "Phone number: " << phoneNumber << std::endl;
	std::cout << "Darkest secret: " << darkestSecret << std::endl;
}