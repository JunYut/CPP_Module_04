/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: we <we@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 09:41:55 by we                #+#    #+#             */
/*   Updated: 2024/12/19 08:39:59 by we               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Dog.hpp"

using std::cout;
using std::endl;
using std::string;

void	Dog::think(void) const
{
	cout << "Dog: " + _brain->getRandomIdea() << endl;
}

void	Dog::makeSound(void) const
{
	cout << _type << ": Barf ! Barf !" << endl;
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
	_brain = NULL;
}

Dog	&Dog::operator = (const Dog &other)
{
	if (&other != this)
	{
		_type = other._type;
		_brain = new Brain(*other._brain);
	}
	return (*this);
}