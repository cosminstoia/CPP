/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstoia <cstoia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 14:21:40 by cstoia            #+#    #+#             */
/*   Updated: 2024/11/08 14:48:02 by cstoia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <stack>

class RPNCalculator
{
    private:
        std::stack<int> _stack;
    public:
        RPNCalculator();
        RPNCalculator(const RPNCalculator &copy);
        RPNCalculator &operator=(const RPNCalculator &copy);
        ~RPNCalculator();

        /* Methods */
        void calculateInput(const std::string &input);
        void performOperation(char op);
};

#endif