/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstoia <cstoia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 10:55:58 by cstoia            #+#    #+#             */
/*   Updated: 2024/10/12 16:11:31 by cstoia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::filterComplain(int level)
{
	switch (level)
	{
	case 0:
		std::cout << "[ DEBUG ]\nI love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
	case 1:
		std::cout << "[ INFO ]\nI cannot believe adding extra bacon costs more money. You didn`t put enough bacon in my burger! If you did, I wouldnt be asking for more!" << std::endl;
	case 2:
		std::cout << "[ WARNING ]\nI think I deserve to have some extra bacon for free. I`ve been coming for years whereas you started working here since last month." << std::endl;
	case 3:
		std::cout << "[ ERROR ]\nThis is unacceptable! I want to speak to the manager now." << std::endl;
		break ;
	default:
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}
