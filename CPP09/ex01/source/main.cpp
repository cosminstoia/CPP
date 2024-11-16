/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstoia <cstoia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 14:21:45 by cstoia            #+#    #+#             */
/*   Updated: 2024/11/08 14:33:53 by cstoia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/RPN.hpp"

int main(int argc, char** argv) 
{
    if (argc != 2) 
    {
        std::cerr << "Usage: ./RPN <expression>\n";
        return (EXIT_FAILURE);
    }
    try 
    {
        RPNCalculator calculator;
        calculator.calculateInput(argv[1]);
    } 
    catch (const std::exception& e) 
    {
        std::cerr << e.what() << std::endl;
        return (EXIT_FAILURE);
    }
    return (EXIT_SUCCESS);
}