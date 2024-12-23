/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: we <we@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 09:41:55 by we                #+#    #+#             */
/*   Updated: 2024/12/19 10:29:47 by we               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Cat.hpp"

using std::cout;
using std::endl;
using std::string;

void	Cat::think(void) const
{
	cout << "Cat: " + _brain->getIdea(0) << endl;
}

void	Cat::makeSound(void) const
{
	cout << _type << ": Meow~" << endl;
}

Brain	*Cat::getBrain(void)
{
	return (_brain);
}

Cat::Cat(void)
{
	cout << "Cat default constructor called" << endl;
	_type = "Cat";
	_brain = new Brain();
}

Cat::Cat(const Cat &other) : Animal(other), _brain(NULL)
{
	cout << "Cat copy constructor called" << endl;
	*this = other;
}

Cat::~Cat(void)
{
	cout << "Cat destructor called" << endl;
	delete _brain;
	_brain = NULL;
}

Cat	&Cat::operator = (const Cat &other)
{
	if (&other != this)
	{
		_type = other._type;
		if (_brain) delete _brain;
		_brain = new Brain(*other._brain);
	}
	return (*this);
}
