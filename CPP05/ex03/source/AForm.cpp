/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstoia <cstoia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 12:55:43 by cstoia            #+#    #+#             */
/*   Updated: 2024/10/21 17:00:21 by cstoia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AForm.hpp"

/* Constructors and deconstructors */
AForm::AForm() : _name("Default"), _isSigned(false), _gradeToSign(150), _gradeToExecute(150), _target("Default") {}

AForm::AForm(const std::string name, std::string target, int gradeToSign, int gradeToExecute)
	: _name(name), _isSigned(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute), _target(target) {}
	
AForm::AForm(const AForm &other)
	: _name(other._name), _isSigned(other._isSigned), _gradeToSign(other._gradeToSign), _gradeToExecute(other._gradeToExecute), _target(other._target) {}

AForm::~AForm() {}

/* Member Operators */
AForm &AForm::operator=(const AForm &other)
{
	if (this != &other)
		_isSigned = other._isSigned;
	return (*this);
}

/* Setters and Getters */
const std::string &AForm::getName() const
{
    return _name;
}

bool AForm::isSigned() const
{
    return _isSigned;
}

int AForm::getGradeToSign() const
{
    return _gradeToSign;
}

int AForm::getGradeToExecute() const
{
    return _gradeToExecute;
}

const std::string& AForm::getTarget() const 
{
    return _target;
}

/* Member Functions */
void AForm::beSigned(const Bureaucrat &bureaucrat)
{
    if(bureaucrat.getGrade() > _gradeToSign)
        throw GradeTooLowException();
    _isSigned = true;
}

void AForm::validateExecution(int bureaucratGrade) const
{
        if (!_isSigned)
            throw std::runtime_error("Form not signed yet.");
        if (bureaucratGrade > _gradeToExecute)
            throw std::runtime_error("Grade too low to execute this form.");
}

/* Exceptions */
const char *AForm::GradeTooHighException::what() const throw()
{
	return ("AForm grade is too high");
}
const char *AForm::GradeTooLowException::what() const throw()
{
	return ("AForm grade is too low");
}

/* Non-member Operators */
std::ostream &operator<<(std::ostream &os, const AForm &Aform)
{
    os << Aform.getName() << ", Signed: " << (Aform.isSigned() ? "Yes" : "No")
       << ", Grade required to sign: " << Aform.getGradeToSign()
       << ", Grade required to execute: " << Aform.getGradeToExecute();
    return os;
}