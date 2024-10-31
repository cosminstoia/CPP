/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstoia <cstoia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 15:31:02 by cstoia            #+#    #+#             */
/*   Updated: 2024/10/29 16:37:00 by cstoia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T, typename F> void iter(T *array, int len, F runFunction)
{
	if (!array)
		return;
    for (int i = 0; i < len; i++)
    {
        runFunction(array[i]);
    }
}

#endif