/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstoia <cstoia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 13:39:19 by cstoia            #+#    #+#             */
/*   Updated: 2024/11/05 15:25:55 by cstoia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
#include <deque>
#include <iostream>

template <typename T>
class MutantStack : public std::stack<T> 
{
    public:
        MutantStack() : std::stack<T>() {}
        MutantStack(const MutantStack& copy) : std::stack<T>(copy) {}
        MutantStack& operator=(const MutantStack& other)
        {
            std::stack<T>::operator=(other);
            return *this;
        }
        ~MutantStack() {}

        using iterator = typename std::deque<T>::iterator;

        iterator begin()
        { 
            return this->c.begin();
        }
        iterator end() 
        { 
            return this->c.end(); 
        }
};

#endif
