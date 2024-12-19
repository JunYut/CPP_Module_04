/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: we <we@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 14:59:50 by we                #+#    #+#             */
/*   Updated: 2024/12/19 10:12:07 by we               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Brain.hpp"

using std::cout;
using std::endl;

/*
	Constructors , Destructor & Operators
*/

Brain::Brain(void)
{
	cout << "Brain default constructor called" << endl;
}

Brain::Brain(const Brain &other)
{
	cout << "Brain copy constructor called" << endl;
	*this = other;
}

Brain::~Brain(void)
{
	cout << "Brain destructor called" << endl;
}

Brain	&Brain::operator = (const Brain &other)
{
	if (this == &other) return (*this);

	for (int i = 0; i < 100; ++i)
		_ideas[i] = other._ideas[i];

	return (*this);
}

/*
	Getters & Setters
*/

string	Brain::getIdea(int index) const
{
	if (index < 0) index = 0;
	if (index > 100) index = 100;
	return (_ideas[index]);
}

void	Brain::setIdea(string idea)
{
	int i = 0;
	while (!_ideas[i].empty() && i < 100)
		++i;
	_ideas[i] = idea;
}

/*
	Member Functions
*/
