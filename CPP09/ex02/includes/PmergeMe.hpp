/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstoia <cstoia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 14:50:30 by cstoia            #+#    #+#             */
/*   Updated: 2024/11/16 11:15:01 by cstoia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <vector>
#include <deque>
#include <algorithm>
#include <chrono>

std::vector<int> parseInput(int argc, char **argv);
bool isSorted(const std::vector<int> &container);

class PmergeMe
{
    private:
        std::vector<int> _numbers;
        std::vector<int> _vec;
        std::deque<int> _deq;
        double _vectorTime;
        double _dequeTime;

        template <typename Container> 
        void printContainer(const Container &container) const 
        {
            for (const auto &elem : container) 
            {
                std::cout << elem << " ";
            }
            std::cout << std::endl;
        }
    public:
        PmergeMe();
        PmergeMe(const std::vector<int> &input);
        PmergeMe(const PmergeMe &copy);
        PmergeMe &operator=(const PmergeMe &copy);
        ~PmergeMe();

        /* Methods */
        void printOutput() const;
        void sortWithVector(); 
        void sortWithDeque();
};

#endif