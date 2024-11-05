/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstoia <cstoia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 12:28:22 by cstoia            #+#    #+#             */
/*   Updated: 2024/11/04 13:32:31 by cstoia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Span.hpp"

Span::Span() : N(0) {}

Span::Span(unsigned int nr) : N(nr)
{
    if (nr <= 0)
        throw std::logic_error("The span must be bigger than 0");
}

Span::Span(const Span &copy) : N(copy.N), elements(copy.elements) {}

Span &Span::operator=(const Span &copy)
{
    if (this != &copy)
    {
        N = copy.N;
        elements = copy.elements;
    }
    return (*this);
}

Span::~Span() {}

void Span::addNumber(int number)
{
    if (elements.size() >= N)
        throw std::overflow_error("The span is full");

    elements.push_back(number);
}

int Span::shortestSpan() const
{
    if (elements.size() < 2)
        throw std::logic_error("No span can be found");

    std::vector<int> sortedElements = elements;
    std::sort(sortedElements.begin(), sortedElements.end());

    int minSpan = 2147483647;
    for (size_t i = 0; i < sortedElements.size() - 1; ++i) 
    {
        int diff = sortedElements[i + 1] - sortedElements[i];
        if (diff < minSpan)
            minSpan = diff;
    }
    return (minSpan);
}

int Span::longestSpan() const 
{
    if (elements.size() < 2)
        throw std::logic_error("No span can be found");

    int maxElement = *std::max_element(elements.begin(), elements.end());
    int minElement = *std::min_element(elements.begin(), elements.end());

    return (maxElement - minElement);
}
