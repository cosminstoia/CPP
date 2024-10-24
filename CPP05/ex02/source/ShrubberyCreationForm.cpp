/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstoia <cstoia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 18:27:28 by cstoia            #+#    #+#             */
/*   Updated: 2024/10/24 14:03:42 by cstoia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/ShrubberyCreationForm.hpp"

/* Constructors and destructors */
ShrubberyCreationForm::ShrubberyCreationForm() {}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
    : AForm("ShrubberyCreationForm", target, 145, 137) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other)
    : AForm(other) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

/* Member Operators */
ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other)
{
    if (this != &other)
        AForm::operator=(other);
    return *this;
}

/* Member Functions */
void ShrubberyCreationForm::printAction() const
{
    std::ofstream outfile(getTarget() + "_shrubbery");

    if (outfile)
    {
        outfile << "   *   \n";
        outfile << "  ***  \n";
        outfile << " ***** \n";
        outfile << "*******\n";
    }
    else
        throw ShrubberyCreationException();

    outfile.close();
}

/* Exceptions */
const char *ShrubberyCreationForm::ShrubberyCreationException::what() const throw()
{
	return ("ShrubberyCreation Failed.");
}