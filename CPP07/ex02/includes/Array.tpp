/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstoia <cstoia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 12:32:24 by cstoia            #+#    #+#             */
/*   Updated: 2024/10/31 15:12:57 by cstoia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T> Array<T>::Array() : _array(nullptr), _len(0) {}

template <typename T>Array<T>::Array(int n) : _len(n) 
{
    _array = new T[n];
}

template <typename T> Array<T>::Array(const Array& other) : _len(other._len) 
{
    _array = new T[_len];
    for (int i = 0; i < _len; i++) {
        _array[i] = other._array[i];
    }
}

template <typename T> Array<T>::~Array() 
{
    delete[] _array;
}

template <typename T> Array<T>& Array<T>::operator=(const Array& other) 
{
    if (this != &other) 
    {
        delete[] _array;
        _len = other._len;
        _array = new T[_len];
        for (int i = 0; i < _len; i++) 
        {
            _array[i] = other._array[i];
        }
    }
    return *this;
}

/* the element can be modify */
template <typename T> T& Array<T>::operator[](int index) 
{
    if (index >= _len) 
    {
        throw std::out_of_range("Index out of bounds");
    }
    return _array[index];
}

template <typename T> unsigned int Array<T>::size() const 
{
    return _len;
}