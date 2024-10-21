/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cstoia <cstoia@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 17:23:26 by cstoia            #+#    #+#             */
/*   Updated: 2024/10/15 12:27:03 by cstoia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include "Brain.hpp"
# include <string>

class AAnimal
{
  protected:
	std::string type;

  public:
	AAnimal();
	virtual ~AAnimal();
	virtual void makeSound() const = 0;
	virtual AAnimal *clone() const = 0;
};

class Dog : public AAnimal
{
  private:
	Brain *brain;

  public:
	Dog();
	Dog(const Dog &other);
	Dog &operator=(const Dog &other);
	~Dog();
	void makeSound() const override;
	AAnimal *clone() const override;
};

class Cat : public AAnimal
{
  private:
	Brain *brain;

  public:
	Cat();
	Cat(const Cat &other);
	Cat &operator=(const Cat &other);
	~Cat();
	void makeSound() const override;
	AAnimal *clone() const override;
};

#endif
