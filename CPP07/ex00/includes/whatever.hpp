/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstoia <cstoia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 14:30:29 by cstoia            #+#    #+#             */
/*   Updated: 2024/10/29 15:30:42 by cstoia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template <typename T> void swap(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

template <typename T> T min(const T &a, const T &b) 
{
    if (a < b)
		return (a);
	else
		return (b);
}

template <typename T> T max(const T &a, const T &b)
{
    if (a > b)
		return (a);
	else
		return (b);
}

#endif