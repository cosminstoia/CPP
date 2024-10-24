/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstoia <cstoia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 12:07:46 by cstoia            #+#    #+#             */
/*   Updated: 2024/10/24 13:57:50 by cstoia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"
#include "../includes/Form.hpp"
#include <iostream>

int main() {
    try {
        Bureaucrat bob("Bob", 2);
        Form formA("FormA", 2, 3);

        std::cout << formA << std::endl;
        bob.signForm(formA); // should succeed
        std::cout << formA << std::endl;

        Bureaucrat jim("Jim", 150);
        Form formB("FormB", 100, 150);

        std::cout << formB << std::endl;
        jim.signForm(formB); // should fail
        std::cout << formB << std::endl;

    } catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}
