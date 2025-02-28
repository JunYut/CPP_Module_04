/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-yu <tjun-yu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 09:41:55 by we                #+#    #+#             */
/*   Updated: 2025/02/28 11:17:07 by tjun-yu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Dog.hpp"

using std::cout;
using std::endl;
using std::string;

void	Dog::think(void) const
{
	cout << "Dog: " + _brain->getIdea() << endl;
}

void	Dog::makeSound(void) const
{
	cout << _type << ": Barf ! Barf !" << endl;
}

Brain	*Dog::getBrain(void)
{
	return (_brain);
}

Dog::Dog(void)
{
	cout << "Dog default constructor called" << endl;
	_type = "Dog";
	_brain = new Brain();
}

Dog::Dog(const Dog &other) : Animal(other), _brain(NULL)
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
		if (_brain) delete _brain;
		_brain = new Brain(*other._brain);
	}
	return (*this);
}
