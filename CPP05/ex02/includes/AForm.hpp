/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstoia <cstoia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 12:55:40 by cstoia            #+#    #+#             */
/*   Updated: 2024/10/21 17:00:36 by cstoia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef AFORM_HPP
# define AFORM_HPP

# include "../includes/Bureaucrat.hpp"
# include <iostream>
# include <string>

class Bureaucrat;

class AForm
{
  private:
	const std::string _name;
	bool _isSigned;
	const int _gradeToSign;
	const int _gradeToExecute;
	const std::string _target;

  public:
    /* Constructors and destructors */
	AForm();
	AForm(const std::string name, std::string target, int gradeToSign, int gradeToExecute);
	AForm(const AForm &other);
	~AForm();
	
	/* Member Operators */
	AForm &operator=(const AForm &other);

  	/* Setters and Getters */
	const std::string &getName() const;
	bool isSigned() const;
	int getGradeToSign() const;
	int getGradeToExecute() const;
	const std::string&getTarget() const;

	/* Member Functions */
	void beSigned(const Bureaucrat &bureaucrat);
 	void execute(Bureaucrat const &executor) const;
	virtual void printAction() const = 0;
	
  	/* Exceptions */
	class GradeTooHighException : public std::exception
	{
		public:
		virtual const char *what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
		public:
		virtual const char *what() const throw();
	};
	class IsNotSignedException : public std::exception
	{
		public:
			virtual const char *what() const throw();
	};
};

/* Non-member Operators */
std::ostream &operator<<(std::ostream &os, const AForm &Aform);

# endif