/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: we <we@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 16:06:25 by we                #+#    #+#             */
/*   Updated: 2024/12/19 08:41:38 by we               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Dog.hpp"

using std::cout;
using std::endl;
using std::string;

void	Dog::makeSound(void) const
{
	cout << _type << ": Bark! Bark! Bark!" << endl;
}

Dog::Dog(void)
{
	cout << "Dog default constructor called" << endl;
	_type = "Dog";
}

Dog::Dog(const Dog &other) : Animal(other)
{
	cout << "Dog copy constructor called" << endl;
	*this = other;
}

Dog::~Dog(void)
{
	cout << "Dog destructor called" << endl;
}

Dog	&Dog::operator = (const Dog &other)
{
	_type = other._type;
	return (*this);
}
