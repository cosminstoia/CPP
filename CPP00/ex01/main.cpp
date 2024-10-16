/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstoia <cstoia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 11:49:20 by cstoia            #+#    #+#             */
/*   Updated: 2024/10/07 11:33:18 by cstoia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>

int	main(void)
{
	PhoneBook	phoneBook;

	std::string command;
	while (true)
	{
		std::cout << "Available commands: ADD, SEARCH, EXIT\n";
		std::cout << "Enter a command: ";
		getline(std::cin, command);
		if (command == "ADD")
			phoneBook.addContact();
		else if (command == "SEARCH")
			phoneBook.searchContact();
		else if (command == "EXIT")
		{
			std::cout << "Exit! All the contacts will be erased.\n";
			break ;
		}
		else
			std::cout << "Invalid command!\n";
	}
	return (0);
}
