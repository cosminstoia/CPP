/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstoia <cstoia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 10:52:53 by cstoia            #+#    #+#             */
/*   Updated: 2024/10/28 14:46:01 by cstoia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Converter.hpp"

int main(int argc, char **argv) 
{
    std::string value;
 
    if(argc == 2)
    {
        value = argv[1];
        ScalarConverter::convert(value);
    }
    else
        std::cout << "There must be one argument\n";

    return 0;
}