/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstoia <cstoia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 11:41:58 by cstoia            #+#    #+#             */
/*   Updated: 2024/11/04 12:25:59 by cstoia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/easyfind.hpp"
#include <iostream>
#include <list>

const char *ElementNotFoundException::what() const throw()
{
    return ("Element not found in container");
}

int main() 
{
    std::list<int> lst = {10, 20, 30, 40};
    try 
    {
        easyfind(lst, 20);
    } 
    catch (const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }

    try 
    {
        easyfind(lst, 99);
    } 
    catch (const std::exception& e) 
    {
        std::cout << e.what() << std::endl;
    }

    return 0;
}
