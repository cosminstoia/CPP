/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstoia <cstoia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 13:20:14 by cstoia            #+#    #+#             */
/*   Updated: 2024/10/29 09:13:00 by cstoia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Serializer.hpp"

int main() 
{
    Data originalData("Hello World");
    
    uintptr_t serializedData = Serializer::serialize(&originalData);
    
    Data* deserializedData = Serializer::deserialize(serializedData);
    
    if (deserializedData == &originalData) 
    {
        std::cout << "Succes: The pointers match!" << std::endl;
        std::cout << "Text: " << deserializedData->text << std::endl;
    } 
    else
        std::cout << "Failure: The pointers do not match." << std::endl;

    return 0;
}