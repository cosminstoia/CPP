/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstoia <cstoia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 11:06:32 by cstoia            #+#    #+#             */
/*   Updated: 2024/10/14 11:44:42 by cstoia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <cmath>
# include <iostream>

class Fixed
{
  private:
	int _point;
	static const int _bits;

  public:
	Fixed();
	Fixed(const Fixed &other);
	Fixed(const int intVal);
	Fixed(const float floatVal);
	~Fixed();

	Fixed &operator=(const Fixed &other);

	/*-----------------Member functions:-----------------*/
	/*---------------------------------------------------*/

	int getRawBits() const;
	void setRawBits(int const raw);
	float toFloat() const;
	int toInt() const;

	/*---------------Comparison operators:---------------*/
	/*---------------------------------------------------*/

	bool operator>(const Fixed &other) const;
	bool operator<(const Fixed &other) const;
	bool operator>=(const Fixed &other) const;
	bool operator<=(const Fixed &other) const;
	bool operator==(const Fixed &other) const;
	bool operator!=(const Fixed &other) const;

	/*---------------Arithmetic operators:---------------*/
	/*---------------------------------------------------*/

	Fixed operator+(const Fixed &other) const;
	Fixed operator-(const Fixed &other) const;
	Fixed operator*(const Fixed &other) const;
	Fixed operator/(const Fixed &other) const;

	/*-----------increment/decrement operators:----------*/
	/*---------------------------------------------------*/

	Fixed &operator++();
	Fixed operator++(int);
	Fixed &operator--();
	Fixed operator--(int);

	/*-----------------min/max operators:----------------*/
	/*---------------------------------------------------*/

	static Fixed &min(Fixed &a, Fixed &b);
	static const Fixed &min(const Fixed &a, const Fixed &b);
	static Fixed &max(Fixed &a, Fixed &b);
	static const Fixed &max(const Fixed &a, const Fixed &b);
};

std::ostream &operator<<(std::ostream &os, const Fixed &fixed);

#endif