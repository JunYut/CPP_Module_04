/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: we <we@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 15:41:24 by we                #+#    #+#             */
/*   Updated: 2024/12/04 10:23:24 by we               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "WrongAnimal.hpp"

using std::cout;
using std::endl;
using std::string;

void	WrongAnimal::makeSound(void) const
{
	cout << _type << ": *animal noises*" << endl;
}

const string	&WrongAnimal::getType(void) const
{
	return (_type);
}

WrongAnimal::WrongAnimal(void) : _type("WrongAnimal")
{
	cout << "WrongAnimal default constructor called" << endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
	cout << "WrongAnimal copy constructor called" << endl;
	*this = other;
}

WrongAnimal::~WrongAnimal(void)
{
	cout << "WrongAnimal destructor called" << endl;
}

WrongAnimal	&WrongAnimal::operator = (const WrongAnimal &other)
{
	_type = other._type;
	return (*this);
}
