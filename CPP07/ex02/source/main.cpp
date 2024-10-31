/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstoia <cstoia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 10:26:06 by cstoia            #+#    #+#             */
/*   Updated: 2024/10/31 15:13:38 by cstoia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <Array.hpp>

#define MAX_VAL 750
int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;//
    return 0;
}

// int main() 
// {
//     Array<int> emptyArray;
//     std::cout << "Created an empty array. Size: " << emptyArray.size() << std::endl;

//     Array<int> arrayWithSize(5);
//     std::cout << "Created array of size 5. Size: " << arrayWithSize.size() << std::endl;

//     Array<int> copyArray(arrayWithSize);
//     std::cout << "Created copy of arrayWithSize. Size: " << copyArray.size() << std::endl;

//     arrayWithSize[0] = 100;
//     std::cout << "Modified arrayWithSize[0] to 100: " << arrayWithSize[0] << std::endl;
//     std::cout << "copyArray[0] should still be 0: " << copyArray[0] << std::endl;

//     Array<int> assignedArray;
//     assignedArray = arrayWithSize;
//     std::cout << "Assigned arrayWithSize to assignedArray. Size: " << assignedArray.size() << std::endl;
//     std::cout << "assignedArray[0] = " << assignedArray[0] << std::endl;

//     assignedArray[1] = 42;
//     std::cout << "assignedArray[1] = " << assignedArray[1] << std::endl;

//     // Check exceptions
//     try 
//     {
//         assignedArray[-1] = 0;
//     } 
//     catch (const std::out_of_range& e) 
//     {
//         std::cerr << e.what() << std::endl;
//     }
//     try 
//     {
//         assignedArray[500] = 0;
//     } 
//     catch (const std::out_of_range& e) 
//     {
//         std::cerr << e.what() << std::endl;
//     }

//     return 0;
// }

