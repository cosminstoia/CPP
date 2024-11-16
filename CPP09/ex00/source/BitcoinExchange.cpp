/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstoia <cstoia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 15:43:20 by cstoia            #+#    #+#             */
/*   Updated: 2024/11/16 10:56:46 by cstoia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &copy) : _data(copy._data) {}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &copy) 
{
    if (this != &copy) 
        _data = copy._data;
    return (*this);
}

BitcoinExchange::~BitcoinExchange() {}

void BitcoinExchange::loadData(const std::string dataFileName)
{
    std::ifstream file(dataFileName);
    if (!file.is_open()) 
    {
        std::cerr << "Error: Could not open file " << dataFileName << std::endl;
        return;
    }
    std::string line;
    std::getline(file, line);
    while (std::getline(file, line)) 
    {
        size_t separatorPos = line.find(',');
        std::string date = line.substr(0, separatorPos);
        std::string priceStr = line.substr(separatorPos + 1);
        try 
        {
            float price = std::stof(priceStr);
            _data[date] = price;
        } 
        catch (const std::invalid_argument &e) 
        {
            std::cerr << "Error: Invalid price in the line: " << date << priceStr << std::endl;
            continue;
        }
    }
    file.close();
}

static bool isValidDate(std::string &date)
{
    if (date.empty() || date.length() != 10)
        return (false);
    if (date[4] != '-' || date[7] != '-')
        return (false);
    std::string yearStr = date.substr(0, 4);
    std::string monthStr = date.substr(5, 2);
    std::string dayStr = date.substr(8, 2);
    if (yearStr.find_first_not_of("0123456789") != std::string::npos ||
        monthStr.find_first_not_of("0123456789") != std::string::npos ||
        dayStr.find_first_not_of("0123456789") != std::string::npos) 
    {
        return (false);
    }
    int month = std::stoi(monthStr);
    int day = std::stoi(dayStr);
    if (month < 1 || month > 12)
        return (false);
    if (day < 1 || day > 31)
        return (false);
    return (true);
}

void BitcoinExchange::parseInput(const std::string inputFileName) const
{
    std::ifstream file(inputFileName);
    if (!file.is_open())
    {
        std::cerr << "Error: Could not open file " << inputFileName << std::endl;
        return;
    }
    std::string line;
    std::getline(file, line);
    while (std::getline(file, line))
    {
        if (line.empty()) 
           continue;
        size_t separatorPos = line.find(" | ");
        if (separatorPos == std::string::npos)
        {
            std::cerr << "Error: bad input => " << line << std::endl;
           continue;
        }
        std::string date = line.substr(0, separatorPos);
        std::string valueStr = line.substr(separatorPos + 3);
        if (!isValidDate(date))
        {
            std::cerr << "Error: Invalid date => " << line << std::endl;
            continue;
        }
        float value;
        try
        {
            value = std::stof(valueStr);
            if (value <= 0)
            {
                std::cerr << "Error: Not a positive number." << std::endl;
                continue;
            }
            if (value >= 1000)
            {
                std::cerr << "Error: too large a number." << std::endl;
                continue;
            }
        }
        catch (const std::invalid_argument &e)
        {
            std::cerr << "Error: Invalid number in line: " << line << std::endl;
           continue;
        }
        auto it = _data.find(date);
        if (it == _data.end())
        {
            it = _data.lower_bound(date);
            if (it == _data.begin() && it->first > date)
            {
                std::cerr << "Error: invalid date." << std::endl;
                continue;
            }
            if (it == _data.end() || it->first > date)
                --it;
        }
        float bitcoinPrice = it->second;
        float result = bitcoinPrice * value;
        std::cout << date << " => " << value << " = " << result << std::endl;
    }
    file.close();
}