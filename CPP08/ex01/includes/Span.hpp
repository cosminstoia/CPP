/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstoia <cstoia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 11:41:31 by cstoia            #+#    #+#             */
/*   Updated: 2024/11/04 13:18:51 by cstoia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <cmath>
#include <stdexcept>

class Span
{
    private:
        unsigned int N;
        std::vector<int> elements;
    public:
        Span();
        Span(unsigned int nr);
        Span(const Span &copy);
        Span &operator=(const Span& copy);
        ~Span();

        void addNumber(int number);
        int shortestSpan() const;
        int longestSpan() const;
        template <typename Iterator>
        void addMultipleNumbers(Iterator begin, Iterator end);
};

template <typename Iterator> void Span::addMultipleNumbers(Iterator begin, Iterator end) 
{
        unsigned int rangeSize = std::distance(begin, end);
        if (elements.size() + rangeSize > N)
            throw std::overflow_error("Cannot add all numbers, the span to small");
        elements.insert(elements.end(), begin, end);
};

#endif