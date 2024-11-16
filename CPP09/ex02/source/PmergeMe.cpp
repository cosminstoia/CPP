/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstoia <cstoia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 14:50:15 by cstoia            #+#    #+#             */
/*   Updated: 2024/11/16 11:36:35 by cstoia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PmergeMe.hpp"

PmergeMe::PmergeMe() 
    : _numbers(), _vec(), _deq(), _vectorTime(0.0), _dequeTime(0.0) {}

PmergeMe::PmergeMe(const std::vector<int> &input) 
    : _numbers(input), _vec(), _deq(), _vectorTime(0.0), _dequeTime(0.0) {}

PmergeMe::PmergeMe(const PmergeMe &copy) 
    : _numbers(copy._numbers), 
      _vec(copy._vec), 
      _deq(copy._deq), 
      _vectorTime(copy._vectorTime), 
      _dequeTime(copy._dequeTime) {}

PmergeMe &PmergeMe::operator=(const PmergeMe &copy)
{
    if (this != &copy) 
    {
        _numbers = copy._numbers;
        _vec = copy._vec;
        _deq = copy._deq;
        _vectorTime = copy._vectorTime;
        _dequeTime = copy._dequeTime;
    }
    return (*this);
}

PmergeMe::~PmergeMe() {}

// Function to store the input in a vector
std::vector<int> parseInput(int argc, char **argv) 
{
    std::vector<int> numbers;

    for (int i = 1; i < argc; ++i) 
    {
        try 
        {
            int num = std::stoi(argv[i]);
            if (num <= 0) 
            {
                std::cerr << "Error: Only positive integers are allowed" << std::endl;
                exit(EXIT_FAILURE);
            }
            numbers.push_back(num);
        } 
        catch (const std::invalid_argument &e) 
        {
            std::cerr << "Error: Invalid input '" << argv[i] << "'" << std::endl;
            exit(EXIT_FAILURE);
        } 
        catch (const std::out_of_range &e) 
        {
            std::cerr << "Error: Input '" << argv[i] << "' is out of range" << std::endl;
            exit(EXIT_FAILURE);
        }
    }
    return (numbers);
}

// Function to check if the inital vector is already sorted
bool isSorted(const std::vector<int> &container) 
{
    for (size_t i = 1; i < container.size(); ++i) 
    {
        if (container[i] < container[i - 1])
            return (false);
    }
    return (true);
}

// Function to print the output
void PmergeMe::printOutput() const 
{
    std::cout << "Before: ";
    printContainer(_numbers);
    std::cout << "After vector sort: ";
    printContainer(_vec);
    std::cout << "After deque sort: ";
    printContainer(_deq);
    std::cout << "Time to process a range of " <<_numbers.size() << " elements with vector : " << _vectorTime << " us" << std::endl;
    std::cout << "Time to process a range of " <<_numbers.size() << " elements with deque : " << _dequeTime << " us" << std::endl;
}

// Function to sort each pair of elements
template <typename Container> static
void pairSort(Container &container) 
{
    for (size_t i = 0; i + 1 < container.size(); i += 2) 
    {
        if (container[i] > container[i + 1])
            std::swap(container[i], container[i + 1]);
    }
}

// Binary search function to find the correct position to insert an element
template <typename Container> static
int searchBinary(const Container &sorted, int left, int right, const typename Container::value_type &value) 
{
    while (left <= right) 
    {
        int mid = left + (right - left) / 2;
        if (sorted[mid] == value)
            return (mid);
        else if (sorted[mid] < value)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return (left);
}

// Function to insert element into sorted vector using binary search
template <typename Container> static
void insertBinary(Container &sorted, const typename Container::value_type &value) 
{
    int pos = searchBinary(sorted, 0, sorted.size() - 1, value);
    sorted.insert(sorted.begin() + pos, value);
}

// Ford-Johnson sort function
template <typename Container> static
void fordJohnsonSort(Container &container) 
{
    pairSort(container);
    Container sorted;
    sorted.push_back(container[0]);
    for (size_t i = 1; i < container.size(); ++i) 
    {
        insertBinary(sorted, container[i]);
    }
    container = sorted;
}

// Function to sort with a vector
void PmergeMe::sortWithVector() 
{
    _vec = _numbers;
    auto start = std::chrono::high_resolution_clock::now();
    fordJohnsonSort(_vec);
    auto end = std::chrono::high_resolution_clock::now();
    _vectorTime = std::chrono::duration<double, std::micro>(end - start).count();
}

// Function to sort with a deque
void PmergeMe::sortWithDeque() 
{
    _deq = std::deque<int>(_numbers.begin(), _numbers.end());
    auto start = std::chrono::high_resolution_clock::now();
    fordJohnsonSort(_deq);
    auto end = std::chrono::high_resolution_clock::now();
    _dequeTime = std::chrono::duration<double, std::micro>(end - start).count();
}
