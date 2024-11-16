/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstoia <cstoia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 14:50:19 by cstoia            #+#    #+#             */
/*   Updated: 2024/11/16 11:17:22 by cstoia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PmergeMe.hpp"

int main(int argc, char **argv) 
{
    if (argc < 2) 
    {
        std::cerr << "Error: No input provided" << std::endl;
        return (EXIT_FAILURE);
    }
    std::vector<int> numbers = parseInput(argc, argv);
    if (!isSorted(numbers))
    {
        PmergeMe toSort(numbers);
        toSort.sortWithVector();
        toSort.sortWithDeque();
        toSort.printOutput();
    }
    else
    {
        std::cout << "Container is already sorted." << std::endl;
        return(0);
    }
    return 0;
}