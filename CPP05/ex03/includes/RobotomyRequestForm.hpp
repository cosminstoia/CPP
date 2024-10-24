/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstoia <cstoia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 10:25:11 by cstoia            #+#    #+#             */
/*   Updated: 2024/10/24 14:44:24 by cstoia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "../includes/AForm.hpp"

class RobotomyRequestForm : public AForm 
{
    public:
        /* Constructors and destructors */
        RobotomyRequestForm();
        RobotomyRequestForm(std::string target);
        RobotomyRequestForm(const RobotomyRequestForm& other);
        virtual ~RobotomyRequestForm();

        /* Member Operators */
        RobotomyRequestForm& operator=(const RobotomyRequestForm& other);
      	
        /* Member Functions */
        void execute(int bureaucratGrade) const override;
};

# endif