/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstoia <cstoia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 16:34:12 by cstoia            #+#    #+#             */
/*   Updated: 2024/10/24 15:55:43 by cstoia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/Intern.hpp"
# include <iostream>

/* Constructors and destructors */
Intern::Intern() {}

Intern::Intern(const Intern &other) {
    (void)other;
}

Intern::~Intern() {}

/* Member Operators */
Intern &Intern::operator=(const Intern &other) 
{
    (void)other;
    return *this;
}

/* Array of form creation functions and form names */
AForm *createShrubberyForm(const std::string &target) 
{
    return new ShrubberyCreationForm(target);
}

AForm *createRobotomyForm(const std::string &target) 
{
    return new RobotomyRequestForm(target);
}

AForm *createPresidentialForm(const std::string &target) 
{
    return new PresidentialPardonForm(target);
}

/* Member Functions */
AForm *Intern::makeForm(const std::string &formName, const std::string &target)
{
    std::string formNames[3] = {"shrubbery", "robotomy", "presidential"};
    AForm *(*formCreators[3])(const std::string &) = {createShrubberyForm, createRobotomyForm, createPresidentialForm};

    for (int i = 0; i < 3; i++) 
    {
        if(formNames[i] == formName)
        {
            std::cout << "Intern: " << formName << std::endl;
            return formCreators[i](target);
        }
    }
    std::cerr << "Error: Form \"" << formName << "\" does not exist." << std::endl;
    return nullptr;
}
