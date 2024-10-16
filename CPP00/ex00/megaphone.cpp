/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstoia <cstoia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 11:18:46 by cstoia            #+#    #+#             */
/*   Updated: 2024/10/07 09:01:32 by cstoia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char **argv)
{
	if (argc > 1)
	{
        for(int i = 1; i < argc; i++)
        {
            for(int j = 0; argv[i][j] != '\0'; j++)
                std::cout << (char)toupper(argv[i][j]);
            if(i < argc - 1)
                std::cout << " ";
        }
        std::cout << std::endl;
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    return (0);
}