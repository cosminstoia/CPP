/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstoia <cstoia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 10:59:54 by cstoia            #+#    #+#             */
/*   Updated: 2024/10/12 16:09:11 by cstoia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Error:\nInvalid arguments." << std::endl;
		return (1);
	}

	Harl harl;
	std::string inputLevel = argv[1];

	int level = 5;
	if (inputLevel == "DEBUG")
		level = 0;
	if (inputLevel == "INFO")
		level = 1;
	if (inputLevel == "WARNING")
		level = 2;
	if (inputLevel == "ERROR")
		level = 3;
	harl.filterComplain(level);
	return (0);
}