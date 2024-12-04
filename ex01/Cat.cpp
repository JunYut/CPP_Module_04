/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: we <we@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 09:41:55 by we                #+#    #+#             */
/*   Updated: 2024/12/04 15:56:24 by we               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Cat.hpp"

using std::cout;
using std::endl;
using std::string;

void	Cat::makeSound(void) const
{
	cout << _type << ": Meow~" << endl;
}

const string	&Cat::getType(void) const
{
	return (_type);
}

Cat::Cat(void)
{
	cout << "Cat default constructor called" << endl;
	_type = "Cat";
	_brain = new Brain();
}

Cat::Cat(const Cat &other) : Animal(other)
{
	cout << "Cat copy constructor called" << endl;
	*this = other;
}

Cat::~Cat(void)
{
	cout << "Cat destructor called" << endl;
	delete _brain;
}

Cat	&Cat::operator = (const Cat &other)
{
	_type = other._type;
	return (*this);
}
