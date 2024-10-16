/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstoia <cstoia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 11:06:21 by cstoia            #+#    #+#             */
/*   Updated: 2024/10/14 11:44:47 by cstoia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_bits = 8;

/*--------------Constructors/Destructors-------------*/
/*---------------------------------------------------*/

Fixed::Fixed()
{
	_point = 0;
}

Fixed::Fixed(const Fixed &other)
{
	this->_point = other._point;
}

Fixed::Fixed(const int intVal)
{
	_point = intVal << _bits;
}

Fixed::Fixed(const float floatVal)
{
	_point = static_cast<int>(roundf(floatVal * (1 << _bits)));
}

Fixed::~Fixed()
{
}

/*---------------------operators:--------------------*/
/*---------------------------------------------------*/

Fixed &Fixed::operator=(const Fixed &other)
{
	if (this != &other)
		this->_point = other._point;
	return (*this);
}

std::ostream &operator<<(std::ostream &os, const Fixed &fixed)
{
	os << fixed.toFloat();
	return (os);
}

/*-----------------Member functions:-----------------*/
/*---------------------------------------------------*/

int Fixed::getRawBits() const
{ return (this->_point); }
void Fixed::setRawBits(int const raw)
{ this->_point = raw; }
float Fixed::toFloat() const
{ return (static_cast<float>(_point) / (1 << _bits)); }
int Fixed::toInt() const
{ return (_point >> _bits); }


/*---------------Comparison operators:---------------*/
/*---------------------------------------------------*/

bool Fixed::operator>(const Fixed &other) const
{ return (_point > other._point); }
bool Fixed::operator<(const Fixed &other) const
{ return (_point < other._point); }
bool Fixed::operator>=(const Fixed &other) const
{ return (_point >= other._point); }
bool Fixed::operator<=(const Fixed &other) const
{ return (_point <= other._point); }
bool Fixed::operator==(const Fixed &other) const
{ return (_point == other._point); }
bool Fixed::operator!=(const Fixed &other) const
{ return (_point != other._point); }


/*---------------Arithmetic operators:---------------*/
/*---------------------------------------------------*/

Fixed Fixed::operator+(const Fixed &other) const
{
	Fixed result;
	result.setRawBits(_point + other._point);
	return (result);
}

Fixed Fixed::operator-(const Fixed &other) const
{
	Fixed result;
	result.setRawBits(_point - other._point);
	return (result);
}

Fixed Fixed::operator*(const Fixed &other) const
{
	Fixed result;
	result.setRawBits((_point * other._point) >> _bits);
	return (result);
}

Fixed Fixed::operator/(const Fixed &other) const
{
	Fixed result;
	result.setRawBits(((_point << _bits) / other._point));
	return (result);
}

/*-----------increment/decrement operators:----------*/
/*---------------------------------------------------*/

Fixed &Fixed::operator++()
{
	_point += 1;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed	temp;

	temp = *this;
	++(*this);
	return (temp);
}

Fixed &Fixed::operator--()
{
	_point -= 1;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed	temp;

	temp = *this;
	--(*this);
	return (temp);
}

/*-----------------min/max operators:----------------*/
/*---------------------------------------------------*/

Fixed &Fixed::min(Fixed &a, Fixed &b)
{ return ((a < b) ? a : b); }
const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{ return ((a < b) ? a : b); }
Fixed &Fixed::max(Fixed &a, Fixed &b)
{ return ((a > b) ? a : b); }
const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{ return ((a > b) ? a : b); }