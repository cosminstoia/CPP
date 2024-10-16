/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstoia <cstoia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 14:56:06 by cstoia            #+#    #+#             */
/*   Updated: 2024/10/12 15:36:48 by cstoia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB
{
  private:
	Weapon *weapon;
	std::string name;

  public:
	HumanB(std::string name);
	~HumanB();
	void setWeapon(Weapon &newWeapon);
	void attack();
};

#endif