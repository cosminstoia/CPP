/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstoia <cstoia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 09:06:32 by cstoia            #+#    #+#             */
/*   Updated: 2024/10/28 14:41:04 by cstoia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Converter.hpp"

/* Constructor, Copy constructor, Operator, Deconstructor */
ScalarConverter::ScalarConverter() {}

ScalarConverter::ScalarConverter(ScalarConverter const &other)
{
    *this = other;
}

ScalarConverter::~ScalarConverter(void) {}

ScalarConverter	&ScalarConverter::operator=(ScalarConverter const &other)
{
	(void)other;
	return *this;
}

/* Function to check if the input is char */
static bool isChar(const std::string &input)
{
    if(std::isalpha(input[0]) && input.size() == 1)
        return (true);
    return (false);
}

/* Function to check if the input is int */
static bool isInt(const std::string &input)
{
    try
    {
        if (input.empty())
            return (false);
        size_t start = 0;
        if (input[0] == '+' || input[0] == '-')
        {
            if (input.size() == 1)
                return (false);
            start = 1;
        }
        for (size_t i = start; i < input.size(); ++i)
        {
            if (!std::isdigit(input[i]))
                return (false);
        }
        if (std::stoi(input) < -2147483648 || std::stoi(input) > 2147483647 || input.size() > 11)
                return false;
    }
    catch(const std::out_of_range&)
    {
        return (false);
    }
    return (true);
}

/* Function to check if the input is double */
static bool isDouble(const std::string &input) 
{
    if ((input == "-inf" || input == "+inf" || input == "nan") ||
           (input.find('.') != std::string::npos || isInt(input)))
           return (true);
    return (false);
}

/* Function to check if the input is float */
static bool isFloat(const std::string &input) 
{
    if ((input == "-inff" || input == "+inff" || input == "nanf") ||
        (input.back() == 'f' && isDouble(input.substr(0, input.size() - 1))))
        return (true);
    return (false);
}

/* Convert and print char to other types */
static void convertChar(const std::string &input)
{
    char charVal;
    
    charVal = input[0];
    std::cout << "char: '" << charVal << "'\n";
    std::cout << "int: " << static_cast<int>(charVal) << '\n';
    std::cout << "float: " << static_cast<float>(charVal) << ".0f\n";
    std::cout << "double: " << static_cast<double>(charVal) << ".0\n";
}

/* Convert and print int to other types */
static void convertInt(const std::string &input)
{
    int value;
    
    value = std::stoi(input);
    if (value >= 32 && value <= 126)
        std::cout << "char: '" << static_cast<char>(value) << "'\n";
    else
        std::cout << "char: Non displayable\n";
    
    std::cout << "int: " << value << '\n';
    std::cout << "float: " << static_cast<float>(value) << ".0f\n";
    std::cout << "double: " << static_cast<double>(value) << ".0\n";
}

/* Convert and print float to other types */
static void convertFloat(const std::string &input) 
{
    float value;

    value = 0;
    if (input == "-inff") 
        value = -std::numeric_limits<float>::infinity();
    else if (input == "+inff")
        value = std::numeric_limits<float>::infinity();
    else if (input == "nanf")
        value = std::numeric_limits<float>::quiet_NaN();
    else 
        value = std::stof(input);

    std::cout << "char: impossible\n";
    std::cout << "int: " << static_cast<int>(value) << '\n';
    std::cout << "float: " << value << "f\n";
    std::cout << "double: " << static_cast<double>(value) << '\n';
}

/* Convert and print double to other types */
static void convertDouble(const std::string &input) 
{
    double value;

    if (input == "-inf") 
        value = -std::numeric_limits<double>::infinity();
    else if (input == "+inf") 
        value = std::numeric_limits<double>::infinity();
    else if (input == "nan") 
        value = std::numeric_limits<double>::quiet_NaN();
    else 
        value = std::stod(input);

    std::cout << "char: impossible\n";
    std::cout << "int: " << static_cast<int>(value) << '\n';
    std::cout << "float: " << static_cast<float>(value) << "f\n";
    std::cout << "double: " << value << '\n';
}

void ScalarConverter::convert(const std::string &input) 
{
    if (isChar(input))
        convertChar(input);
    else if (isInt(input))
        convertInt(input);
    else if (isFloat(input))
        convertFloat(input);
    else if (isDouble(input))
        convertDouble(input);
    else
        std::cout << "Input must be: char / int / float / double.\n";
}