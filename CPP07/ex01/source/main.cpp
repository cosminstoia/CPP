/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstoia <cstoia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 15:31:27 by cstoia            #+#    #+#             */
/*   Updated: 2024/10/29 16:37:01 by cstoia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/iter.hpp"

static void ft_printint(int param)
{
    std::cout << param << ' ';
}

static void ft_printchar(char param)
{
    std::cout << param << ' ';
}
static void ft_printstring(std::string param)
{
    std::cout << param << ' ';
}

int main()
{
    /* Testing the iter with an array of integers */
    int intArray[] = {1, 2, 3, 4, 5};
    std::cout << "IntArray: ";
    iter(intArray, 5, ft_printint);
    std::cout << std::endl;

    /* Testing the iter with an array of characters */
    char charArray[] = {'a', 'b', 'c', 'd', 'e'};
    std::cout << "CharArray: ";
    iter(charArray, 5, ft_printchar);
    std::cout << std::endl;

    /* Testing the iter with an array of strings */
    std::string stringArray[] = {"bla", "bla", "bla", "bla", "blo"};
    std::cout << "StringArray: ";
    iter(stringArray, 5, ft_printstring);
    std::cout << std::endl;
}