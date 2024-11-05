/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstoia <cstoia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 11:41:31 by cstoia            #+#    #+#             */
/*   Updated: 2024/11/04 12:26:02 by cstoia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <exception>

class ElementNotFoundException : public std::exception 
{
    public:
        const char *what() const throw();
};

template <typename T> void easyfind(T &container, int value) 
{
    auto i = std::find(container.begin(), container.end(), value);
    if (i != container.end()) 
        std::cout << "The value has been found: " << *i << std::endl;
    else
        throw ElementNotFoundException();
};

#endif