/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstoia <cstoia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 12:07:49 by cstoia            #+#    #+#             */
/*   Updated: 2024/10/24 10:12:39 by cstoia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>

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

/* Non-member operators */
std::ostream& operator<<(std::ostream &out, const Bureaucrat &b);

# endif
