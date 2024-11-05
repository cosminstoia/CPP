/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstoia <cstoia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 12:28:26 by cstoia            #+#    #+#             */
/*   Updated: 2024/11/04 13:34:35 by cstoia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Span.hpp"

int main()
{
    Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);

    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;

    return 0;
}

// int main() 
// {
//     try 
//     {
//         Span span(10);
        
//         std::vector<int> values = {1 ,4 ,3, 5, 9, 6};
//         span.addMultipleNumbers(values.begin(), values.end());
        
//         span.addNumber(2);
//         span.addNumber(8);
        
//         std::cout << "Shortest span: " << span.shortestSpan() << std::endl;
//         std::cout << "Longest span: " << span.longestSpan() << std::endl;

//         // test exception
//         std::vector<int> moreValues = {10, 11, 12, 13};
//         span.addMultipleNumbers(moreValues.begin(), moreValues.end());
//     } 
//     catch (const std::overflow_error& e) 
//     {
//         std::cerr << "Overflow error: " << e.what() << std::endl;
//     }
//     catch (const std::logic_error& e)
//     {
//         std::cerr << "Logic error: " << e.what() << std::endl;
//     }
//     catch (const std::exception& e) 
//     {
//         std::cerr << "General exception: " << e.what() << std::endl;
//     }

//     try 
//     {
//         Span smallSpan(2);
//         smallSpan.addNumber(5);
//         smallSpan.addNumber(10);
//         std::cout << "Shortest span in small span: " << smallSpan.shortestSpan() << std::endl;
//         std::cout << "Longest span in small span: " << smallSpan.longestSpan() << std::endl;

//         // test exception
//         Span emptySpan(1);
//         std::cout << "Shortest span in empty span: " << emptySpan.shortestSpan() << std::endl;
//     } 
//     catch (const std::logic_error& e) 
//     {
//         std::cerr << "Logic error: " << e.what() << std::endl;
//     }

//     return 0;
// }