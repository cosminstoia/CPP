/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstoia <cstoia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 13:20:43 by cstoia            #+#    #+#             */
/*   Updated: 2024/10/28 15:00:38 by cstoia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Serializer.hpp"

/* Constructor, Copy constructor, Operator, Deconstructor */
Serializer::Serializer() {}

Serializer::Serializer(Serializer const &other)
{
    *this = other;
}

Serializer::~Serializer(void) {}

Serializer &Serializer::operator=(Serializer const &other)
{
	(void)other;
	return *this;
}

/* Constructor for the Data struct */
Data::Data(std::string text) : text(text) {}

uintptr_t Serializer::serialize(Data* ptr) 
{
    return reinterpret_cast<uintptr_t>(ptr);
}

Data* Serializer::deserialize(uintptr_t raw) 
{
    return reinterpret_cast<Data*>(raw);
}