/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstoia <cstoia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 13:15:51 by cstoia            #+#    #+#             */
/*   Updated: 2024/10/28 15:25:29 by cstoia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <iostream>
#include <cstdint>

struct Data 
{
    std::string text;

    Data(std::string text);
};

class Serializer
{
    private:
        /* Constructor, Copy constructor, Operator, Deconstructor */
        Serializer();
        Serializer(const Serializer &other);
        Serializer &operator=(const Serializer&);
        ~Serializer();

    public:
        /* Member functions */
        static uintptr_t serialize(Data* ptr);
        static Data* deserialize(uintptr_t raw);
};

#endif