/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstoia <cstoia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 15:18:28 by cstoia            #+#    #+#             */
/*   Updated: 2024/10/29 08:58:05 by cstoia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base* generate() 
{
    int random = std::rand() % 3;

    if (random == 0)
        return new A();
    else if (random == 1)
        return new B();
    else
        return new C();
}

/*  If p is of type A (or a class derived from A), it returns a valid pointer to A.
    If p is not of type A, it returns nullptr.       */
void identify(Base* p) 
{
    if (dynamic_cast<A*>(p))
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "B" << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "C" << std::endl;
    else
        std::cout << "Unknown type" << std::endl;
}

/*  If p is of type A, it works like a normal cast and lets us use p as an A reference 
    If p is not of type A, it throws a std::bad_cast exception. 
    This means we must handle it with a try/catch block */
void identify(Base& p) 
{
    try 
    {
        (void)dynamic_cast<A&>(p);
        std::cout << "A" << std::endl;
    } 
    catch (std::bad_cast&) 
    {}

    try 
    {
        (void)dynamic_cast<B&>(p);
        std::cout << "B" << std::endl;
    } 
    catch (std::bad_cast&) 
    {}

    try 
    {
        (void)dynamic_cast<C&>(p);
        std::cout << "C" << std::endl;
    } 
    catch (std::bad_cast&) 
    {}
}
