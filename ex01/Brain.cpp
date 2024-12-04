/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: we <we@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 14:59:50 by we                #+#    #+#             */
/*   Updated: 2024/12/04 15:50:18 by we               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Brain.hpp"

using std::cout;
using std::endl;
using std::stringstream;

Brain::Brain(void)
{
	cout << "Brain default constructor called" << endl;
	stringstream	ss;

	for (int i = 0; i < 100; ++i)
	{
		ss << i;
		_ideas[i] = "idea " + ss.str();
	}
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
