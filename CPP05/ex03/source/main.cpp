/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstoia <cstoia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 12:07:46 by cstoia            #+#    #+#             */
/*   Updated: 2024/10/24 15:53:16 by cstoia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Intern.hpp"

int main() 
{
    Intern intern;

    // ShrubberyCreationForm
    AForm *form1 = intern.makeForm("shrubbery", "test");
    if (form1)
        std::cout << "Form created: " << form1->getName() << std::endl;

    // RobotomyRequestForm
    AForm *form2 = intern.makeForm("robotomy", "robo");
    if (form2)
        std::cout << "Form created: " << form2->getName() << std::endl;

    // PresidentialPardonForm
    AForm *form3 = intern.makeForm("presidential", "President");
    if (form3)
        std::cout << "Form created: " << form3->getName() << std::endl;

    // invalid form
    AForm *form4 = intern.makeForm("invalid form", "blabla");

    delete form1;
    // delete form2;
    delete form3;
    delete form4;
    
    return 0;
}