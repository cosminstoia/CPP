/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstoia <cstoia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 14:21:52 by cstoia            #+#    #+#             */
/*   Updated: 2024/11/08 14:48:02 by cstoia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/RPN.hpp"

RPNCalculator::RPNCalculator() {}

RPNCalculator::RPNCalculator(const RPNCalculator &copy) : _stack(copy._stack) {}

RPNCalculator &RPNCalculator::operator=(const RPNCalculator &copy)
{
    if(this != &copy)
        _stack = copy._stack;
    return (*this);
}

RPNCalculator::~RPNCalculator() {}

static bool isOperator(char ch) 
{
    return (ch == '+' || ch == '-' || ch == '*' || ch == '/');
}

void RPNCalculator::performOperation(char op) 
{
        if (_stack.size() < 2)
            throw std::runtime_error("Error: Invalid expression");
        int b = _stack.top(); 
        _stack.pop();
        int a = _stack.top(); 
        _stack.pop();
        int result = 0;
        if (op == '+') 
            result = a + b;
        else if (op == '-') 
            result = a - b;
        else if (op == '*') 
            result = a * b;
        else if (op == '/')
        {
            if (b == 0) 
                throw std::runtime_error("Error: Division by zero");
            result = a / b;
        }
        _stack.push(result);
    }
void RPNCalculator::calculateInput(const std::string &input)
{
     for (size_t i = 0; i < input.size(); ++i) 
     {
        char ch = input[i];
        if (ch == ' ') 
            continue;
        if (isdigit(ch))
            _stack.push(ch - '0');
        else if (isOperator(ch))
            performOperation(ch);
        else
            throw std::runtime_error("Error: Invalid character in expression");
    }
    if (_stack.size() != 1)
        throw std::runtime_error("Error: Invalid expression");
    std::cout << _stack.top() << std::endl;
}

