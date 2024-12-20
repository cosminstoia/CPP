/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstoia <cstoia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 12:07:51 by cstoia            #+#    #+#             */
/*   Updated: 2024/10/24 13:55:16 by cstoia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/Bureaucrat.hpp"
# include "../includes/Form.hpp"

/* Constructors and destructors */
Bureaucrat::Bureaucrat() : _name("Default"), _grade(150) {}

Bureaucrat::Bureaucrat(const std::string name, int grade) : _name(name), _grade(grade) 
{
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat &other) : _name(other._name), _grade(other._grade) {}

Bureaucrat::~Bureaucrat() {}

/* Member Operators */
Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other)
{
	if (this != &other)
		_grade = other._grade; 
	return (*this);
}

/* Setters and Getters */
const std::string &Bureaucrat::getName() const
{  
	return (_name);
}

int Bureaucrat::getGrade() const
{
	return (_grade);
}

/* Member Functions */
void Bureaucrat::incrementGrade()
{
	if (_grade - 1 < 1)
		throw GradeTooHighException();
	_grade--;
}
 
void Bureaucrat::decrementGrade()
{
	if (_grade + 1 > 150)
		throw GradeTooLowException();
	_grade++;
}

void Bureaucrat::signForm(Form &form)
{
    try 
	{
        form.beSigned(*this);
        std::cout << _name << " signed " << form << std::endl;
    } 
	catch (const Form::GradeTooLowException &e)
	{
        std::cout << _name << " couldn't sign " << form << " because " << e.what() << std::endl;
    }
}

/* Exceptions */
const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade is too high");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade is too low");
}

/* Non-member Operators */
std::ostream& operator<<(std::ostream &out, const Bureaucrat &b)
{
    out << "Name: " << b.getName() << ", Grade: " << b.getGrade();
    return out;
}