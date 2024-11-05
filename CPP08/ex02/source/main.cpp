/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstoia <cstoia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 13:38:54 by cstoia            #+#    #+#             */
/*   Updated: 2024/11/05 15:25:56 by cstoia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/MutantStack.hpp"
#include <list>

int main()
{
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    //[...]
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
    std::cout << *it << std::endl;
    ++it;
    }
    std::stack<int> s(mstack);
    return 0;
}

// int main()
// {
//     std::list<int> mlist;
//     mlist.push_back(5);
//     mlist.push_back(17);
//     std::cout << mlist.back() << std::endl;  // Use back() instead of top() for std::list
//     mlist.pop_back();
//     std::cout << mlist.size() << std::endl;

//     mlist.push_back(3);
//     mlist.push_back(5);
//     mlist.push_back(737);
//     mlist.push_back(0);

//     std::list<int>::iterator it = mlist.begin();
//     std::list<int>::iterator ite = mlist.end();

//     ++it;
//     --it;

//     while (it != ite)
//     {
//         std::cout << *it << std::endl;
//         ++it;
//     }

//     // Copy constructor to initialize a new std::list from mlist
//     std::list<int> s(mlist);
//     return 0;
// }