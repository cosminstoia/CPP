/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstoia <cstoia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 12:07:46 by cstoia            #+#    #+#             */
/*   Updated: 2024/10/24 14:34:53 by cstoia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"
#include "../includes/ShrubberyCreationForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/PresidentialPardonForm.hpp"

int main() 
{
    try 
    {
        Bureaucrat john("John", 1);

        // ShrubberyCreationForm test
        ShrubberyCreationForm shrubForm("test");
        john.signForm(shrubForm);
        john.executeForm(shrubForm);  // Should succeed

        // RobotomyRequestForm test
        RobotomyRequestForm roboForm("Robo");
        john.signForm(roboForm);
        john.executeForm(roboForm);  // 50% chance of success

        // PresidentialPardonForm test
        PresidentialPardonForm pardonForm("President");
        john.signForm(pardonForm);
        john.executeForm(pardonForm);  // Should succeed
        
        // Bureaucrat with a low grade
        Bureaucrat lowRankBureaucrat("LowRank", 150);
        PresidentialPardonForm pardonForm2("blabla");
        lowRankBureaucrat.signForm(pardonForm2);  // Should fail
        lowRankBureaucrat.executeForm(pardonForm2);  // Should fail

    } 
    catch (std::exception &e) 
    {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}
