/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstoia <cstoia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 14:04:52 by cstoia            #+#    #+#             */
/*   Updated: 2024/10/24 14:00:27 by cstoia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "../includes/AForm.hpp"

class PresidentialPardonForm : public AForm
{
    public:
      	/* Constructors and destructors */
        PresidentialPardonForm();
        PresidentialPardonForm(const std::string &target);
        PresidentialPardonForm(const PresidentialPardonForm& other);
        ~PresidentialPardonForm();

        /* Member Operators */
        PresidentialPardonForm& operator=(const PresidentialPardonForm& other);

      	/* Member Functions */
        void printAction() const override;
};

# endif