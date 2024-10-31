/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstoia <cstoia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 14:31:12 by cstoia            #+#    #+#             */
/*   Updated: 2024/10/29 15:30:45 by cstoia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/whatever.hpp"

int main( void ) 
{
int a = 2;
int b = 3;
::swap( a, b );
std::cout << "a = " << a << ", b = " << b << std::endl;
std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
std::string c = "chaine1";
std::string d = "chaine2";
::swap(c, d);
std::cout << "c = " << c << ", d = " << d << std::endl;
std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
return 0;
}


// int main() 
// {
//     /* int swap */
//     int x = 10;
//     int y = 20;

//     std::cout << "x: " << x << ", y: " << y << std::endl;
//     ::swap(x, y);
//     std::cout << "x: " << x << ", y: " << y << std::endl;

//     std::cout << "min: " << ::min(x, y) << std::endl;
//     std::cout << "max: " << ::max(x, y) << std::endl;

//     /* char swap */
//     char q = 'q';
//     char w = 'w';
    
//     std::cout << "q: " << q << ", w: " << w << std::endl;
//     ::swap(q, w);
//     std::cout << "q: " << q << ", w: " << w << std::endl;

//     std::cout << "min: " << ::min(q, w) << std::endl;
//     std::cout << "max: " << ::max(q, w) << std::endl;

//     /* stirng swap */
//     std::string str1 = "Hello";
//     std::string str2 = "World";

//     std::cout << "str1: " << str1 << ", str2: " << str2 << std::endl;
//     ::swap(str1, str2);
//     std::cout << "str1: " << str1 << ", str2: " << str2 << std::endl;
    
//     std::cout << "min: " << ::min(str1, str2) << std::endl;
//     std::cout << "max: " << ::max(str1, str2) << std::endl;

//     return 0;
// }
