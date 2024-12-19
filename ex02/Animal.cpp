/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: we <we@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 15:41:24 by we                #+#    #+#             */
/*   Updated: 2024/12/04 10:23:24 by we               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Animal.hpp"

using std::cout;
using std::endl;
using std::string;

void	Animal::makeSound(void) const
{
	cout << _type << ": *animal noises*" << endl;
}

const string	&Animal::getType(void) const
{
	return (_type);
}

Animal::Animal(void) : _type("Animal")
{
	cout << "Animal default constructor called" << endl;
}

Animal::Animal(const Animal &other)
{
	cout << "Animal copy constructor called" << endl;
	*this = other;
}

Animal::~Animal(void)
{
	cout << "Animal destructor called" << endl;
}

Animal	&Animal::operator = (const Animal &other)
{
	_type = other._type;
	return (*this);
}
