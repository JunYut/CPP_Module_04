/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: we <we@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 16:06:25 by we                #+#    #+#             */
/*   Updated: 2024/12/16 09:10:57 by we               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Dog.hpp"

using std::cout;
using std::endl;
using std::string;

void	Dog::think(void) const
{
	cout << "Cat: " + _brain->getRandomIdea() << endl;
}

void	Dog::makeSound(void) const
{
	cout << _type << ": Bark! Bark! Bark!" << endl;
}

const string	&Dog::getType(void) const
{
	return (_type);
}

Dog::Dog(void)
{
	cout << "Dog default constructor called" << endl;
	_type = "Dog";
	_brain = new Brain();
}

Dog::Dog(const Dog &other) : Animal(other)
{
	cout << "Dog copy constructor called" << endl;
	*this = other;
}

Dog::~Dog(void)
{
	cout << "Dog destructor called" << endl;
	delete _brain;
}

Dog	&Dog::operator = (const Dog &other)
{
	_type = other._type;
	return (*this);
}
