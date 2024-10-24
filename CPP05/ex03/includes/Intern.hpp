/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstoia <cstoia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 16:34:03 by cstoia            #+#    #+#             */
/*   Updated: 2024/10/24 14:35:42 by cstoia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef INTERN_HPP
# define INTERN_HPP

# include "../includes/AForm.hpp"
# include "../includes/ShrubberyCreationForm.hpp"
# include "../includes/RobotomyRequestForm.hpp"
# include "../includes/PresidentialPardonForm.hpp"
# include <string>

class Intern
{
    public:
      	/* Constructors and destructors */
        Intern();
        Intern(const Intern &other);
        ~Intern();
	    
        /* Member Operators */
        Intern &operator=(const Intern &other);
        
        /* Member Functions */
        AForm *makeForm(const std::string &formName, const std::string &target);
};

# endif