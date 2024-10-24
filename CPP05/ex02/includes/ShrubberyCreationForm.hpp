/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstoia <cstoia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 18:27:26 by cstoia            #+#    #+#             */
/*   Updated: 2024/10/24 14:09:35 by cstoia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef ShrubberyCreationForm_HPP
# define ShrubberyCreationForm_HPP

# include "../includes/AForm.hpp"
# include <fstream>

class ShrubberyCreationForm : public AForm 
{
    public:
        /* Constructors and destructors */
        ShrubberyCreationForm();
        ShrubberyCreationForm(std::string target);
        ShrubberyCreationForm(const ShrubberyCreationForm& other);
        virtual ~ShrubberyCreationForm();
        
        /* Member Operators */
        ShrubberyCreationForm& operator=(const ShrubberyCreationForm& other);
        
        /* Member Functions */
        void printAction() const override;

        /* Exceptions */
        class ShrubberyCreationException : public std::exception
		{
			public:
				const char *what() const throw();
		};
};

# endif