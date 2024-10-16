/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstoia <cstoia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 10:18:41 by cstoia            #+#    #+#             */
/*   Updated: 2024/10/14 10:47:44 by cstoia           ###   ########.fr       */
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

	int getRawBits() const;
	void setRawBits(int const raw);
	float toFloat() const;
	int toInt() const;
};

std::ostream &operator<<(std::ostream &os, const Fixed &fixed);

#endif