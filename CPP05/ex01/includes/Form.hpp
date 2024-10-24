/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstoia <cstoia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 12:55:40 by cstoia            #+#    #+#             */
/*   Updated: 2024/10/24 13:57:16 by cstoia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef FORM_HPP
# define FORM_HPP

# include "../includes/Bureaucrat.hpp"
# include <iostream>
# include <string>

class Bureaucrat;

class Form
{
  private:
	const std::string _name;
	bool _isSigned;
	const int _gradeToSign;
	const int _gradeToExecute;

  public:
    /* Constructors and destructors */
	Form();
	Form(const std::string name, int gradeToSign, int gradeToExecute);
	Form(const Form &other);
	~Form();

	/* Member Operators */
	Form &operator=(const Form &other);

  	/* Setters and Getters */
	const std::string &getName() const;
	bool isSigned() const;
	int getGradeToSign() const;
	int getGradeToExecute() const;

  	/* Member Functions */
	void beSigned(const Bureaucrat &bureaucrat);

  	/* Exceptions */
	class GradeTooHighException : public std::exception
	{
		public:
		const char *what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
		public:
		const char *what() const throw();
	};
};

/* Non-member Operators */
std::ostream &operator<<(std::ostream &out, const Form &form);

# endif