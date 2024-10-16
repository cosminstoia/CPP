/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstoia <cstoia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 15:27:41 by cstoia            #+#    #+#             */
/*   Updated: 2024/10/10 10:52:51 by cstoia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <string>

static std::string replace_in_line(std::string &line, std::string &s1,
	std::string &s2)
{
	size_t	pos;
	size_t	found_pos;

	std::string new_line;
	pos = 0;
	while ((found_pos = line.find(s1, pos)) != std::string::npos)
	{
		new_line.append(line, pos, found_pos - pos);
		new_line.append(s2);
		pos = found_pos + s1.length();
	}
	new_line.append(line, pos, std::string::npos);
	return (new_line);
}

static void	replace_string_in_file(std::string &filename, std::string &s1,
		std::string &s2)
{
	std::ifstream input_file(filename);
	if (!input_file)
	{
		std::cout << "Error:\nOpen file could not be opend." << std::endl;
		return ;
	}
	std::ofstream output_file("output.txt");
	if (!output_file)
	{
		std::cout << "Error:\nOutput file could not be created." << std::endl;
		return ;
	}
	std::string line;
	while (std::getline(input_file, line))
	{
		std::string modified_line = replace_in_line(line, s1, s2);
		output_file << modified_line << std::endl;
	}
	input_file.close();
	output_file.close();
}

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Error:\nInvalid number of arguments." << std::endl;
		return (0);
	}
	std::string filename, s1, s2;
	filename = argv[1];
	s1 = argv[2];
	s2 = argv[3];
	replace_string_in_file(filename, s1, s2);
	return (0);
}
