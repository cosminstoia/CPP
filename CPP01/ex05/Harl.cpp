/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstoia <cstoia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 10:55:58 by cstoia            #+#    #+#             */
/*   Updated: 2024/10/10 12:01:20 by cstoia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug(void)
{
	std::cout << "DEBUG:\nI love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}
void Harl::info(void)
{
	std::cout << "INFO:\nI cannot believe adding extra bacon costs more money. You didn`t put enough bacon in my burger! If you did, I wouldnt be asking for more!" << std::endl;
}
void Harl::warning(void)
{
	std::cout << "WARNING:\nI think I deserve to have some extra bacon for free. I`ve been coming for years whereas you started working here since last month." << std::endl;
}
void Harl::error(void)
{
	std::cout << "ERROR:\nThis is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level)
{
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*complaintFuncs[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	for (int i = 0; i < 4; i++)
	{
		if(levels[i] == level)
		{
			(this->*complaintFuncs[i])();
			return ;
		}
	}
	std::cout << "Error:\nUnknown level." << std::endl;
}