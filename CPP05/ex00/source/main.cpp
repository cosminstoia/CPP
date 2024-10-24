/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstoia <cstoia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 12:07:46 by cstoia            #+#    #+#             */
/*   Updated: 2024/10/24 10:22:40 by cstoia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"

int	main(void)
{
	try
	{
		Bureaucrat bob("Bob", 2);
		std::cout << bob << std::endl;
		bob.incrementGrade(); // should succeed
		std::cout << bob << std::endl;
		bob.incrementGrade(); // should throw GradeTooHigh
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Bureaucrat jim("Jim", 149);
		std::cout << jim << std::endl;
		jim.decrementGrade(); // should succeed
		std::cout << jim << std::endl;
		jim.decrementGrade(); // should throw GradeTooLow
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}
