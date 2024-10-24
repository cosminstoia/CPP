/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstoia <cstoia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 10:24:53 by cstoia            #+#    #+#             */
/*   Updated: 2024/10/24 14:03:49 by cstoia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/RobotomyRequestForm.hpp"

/* Constructors and destructors */
RobotomyRequestForm::RobotomyRequestForm() {}

RobotomyRequestForm::RobotomyRequestForm(std::string target)
    : AForm("RobotomyRequestForm", target, 72, 45) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other)
    : AForm(other) {}

RobotomyRequestForm::~RobotomyRequestForm() {}

/* Member Operators */
RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& other)
{
    if (this != &other)
        AForm::operator=(other);
    return *this;
}

/* Member Functions */
void RobotomyRequestForm::printAction() const
{
    std::cout << "Drilling noises..." << std::endl;
    if (rand() % 2 == 1)
        std::cout << getTarget() << " has been robotomized successfully." << std::endl;
    else
        throw RobotomyRequestException();
}  

/* Exceptions */
const char *RobotomyRequestForm::RobotomyRequestException::what() const throw()
{
	return ("Robotomy failed.");
}