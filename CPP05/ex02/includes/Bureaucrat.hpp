/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstoia <cstoia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 11:02:14 by cstoia            #+#    #+#             */
/*   Updated: 2024/10/24 14:00:10 by cstoia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include "../includes/AForm.hpp"
# include <iostream>

class AForm;

class Bureaucrat
{
  private:
	const std::string _name;
	int _grade;

  public:
  	/* Constructors and destructors */
	Bureaucrat();
	Bureaucrat(const std::string name, int grade);
	Bureaucrat(const Bureaucrat &other);
	~Bureaucrat();
	
	/* Member Operators */
	Bureaucrat &operator=(const Bureaucrat &other);

  	/* Setters and Getters */
	const std::string &getName() const;
	int getGrade() const;

  	/* Member Functions */
	void incrementGrade();
	void decrementGrade();
	void executeForm(AForm const &form) const;
	void signForm(AForm &form);
	
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
std::ostream& operator<<(std::ostream &out, const Bureaucrat &b);

# endif