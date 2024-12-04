/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: we <we@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 09:41:55 by we                #+#    #+#             */
/*   Updated: 2024/12/04 10:29:18 by we               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "WrongCat.hpp"

using std::cout;
using std::endl;
using std::string;

void	WrongCat::makeSound(void) const
{
	cout << _type << ": Meow~" << endl;
}

const string	&WrongCat::getType(void) const
{
	return (_type);
}

WrongCat::WrongCat(void)
{
	cout << "WrongCat default constructor called" << endl;
	_type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &other) : WrongAnimal(other)
{
	cout << "WrongCat copy constructor called" << endl;
	*this = other;
}

WrongCat::~WrongCat(void)
{
	cout << "WrongCat destructor called" << endl;
}

WrongCat	&WrongCat::operator = (const WrongCat &other)
{
	_type = other._type;
	return (*this);
}
