/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstoia <cstoia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 10:29:42 by cstoia            #+#    #+#             */
/*   Updated: 2024/10/31 15:11:30 by cstoia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

template<typename T> class Array
{
    private:
        T *_array;
        int _len;
    public:
        Array();
        Array(int n);
        Array(const Array<T>& other);
        Array<T>& operator=(const Array<T>& other);
        ~Array();

        T& operator[](int index);
        unsigned int size() const;   
};

#include "Array.tpp"

#endif