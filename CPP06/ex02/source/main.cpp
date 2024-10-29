/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstoia <cstoia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 15:12:36 by cstoia            #+#    #+#             */
/*   Updated: 2024/10/29 09:21:30 by cstoia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int main() 
{
    srand(static_cast<unsigned int>(time(0)));

    // Generate a random instance of A, B, or C
    Base* randomInstance = generate();

    // Identify the type using pointer
    std::cout << "Identification using pointer: ";
    identify(randomInstance);

    // Identify the type using reference
    std::cout << "Identification using reference: ";
    identify(*randomInstance);

    // Clean up allocated memory
    delete randomInstance;

    return 0;
}