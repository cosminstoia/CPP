/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstoia <cstoia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 08:56:20 by cstoia            #+#    #+#             */
/*   Updated: 2024/10/28 14:45:56 by cstoia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERTER_HPP
#define CONVERTER_HPP

#include <iostream>

class ScalarConverter
{
    private:
    /* Constructor, Copy constructor, Operator, Deconstructor */
        ScalarConverter();
        ScalarConverter(const ScalarConverter &other);
        ScalarConverter &operator=(const ScalarConverter&);
        ~ScalarConverter();

    public:
    /* Member functions */
        static void convert(const std::string &input);
};

#endif