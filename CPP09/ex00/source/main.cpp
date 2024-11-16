/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstoia <cstoia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 15:43:16 by cstoia            #+#    #+#             */
/*   Updated: 2024/11/08 14:11:59 by cstoia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/BitcoinExchange.hpp"

int main(int argc, char **argv)
{
    BitcoinExchange exchange;
    
    if (argc != 2)
    {
        std::cerr << "Usage: ./btc <filename>\n";
        return (1);
    }
    exchange.loadData("data.csv");
    exchange.parseInput(argv[1]);
}