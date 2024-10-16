/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstoia <cstoia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 12:06:46 by cstoia            #+#    #+#             */
/*   Updated: 2024/10/07 11:03:14 by cstoia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class PhoneBook
{
  private:
	Contact contacts[8];
	int currentIndex;

  public:
	PhoneBook();
	PhoneBook(const PhoneBook &other);
	PhoneBook& operator=(const PhoneBook &other);
	~PhoneBook();

	void addContact();
	void searchContact() const;
};

#endif