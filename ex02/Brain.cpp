/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: we <we@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 14:59:50 by we                #+#    #+#             */
/*   Updated: 2024/12/19 10:08:08 by we               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Brain.hpp"
# include <cstdlib>
# include <ctime>
# include <unistd.h>

using std::cout;
using std::endl;

/*
	Constructors , Destructor & Operators
*/

Brain::Brain(void)
{
	cout << "Brain default constructor called" << endl;
	int	i = -1;
	while (++i < 100)
		_ideas[i] = _ideaGenerator();
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

/*
	Member Functions
*/

string	Brain::_ideaGenerator() const
{
	srand((unsigned)time(NULL) * getpid());

	string	tmp;
	int		min = 4;
	int		max = 12;
	int		random = min + rand() % (max - min + 1);
	static const char alphanum[] =
		"0123456789"
		"ABCDEFGHIJKLMNOPQRSTUVWXYZ"
		"abcdefghijklmnopqrstuvwxyz";

	tmp.reserve(random);
	for (int i = 0; i < random; ++i)
		tmp += alphanum[rand() % (sizeof(alphanum) - 1)];

	return tmp;
}

string	Brain::getIdea() const
{
	int min = 0;
	int max = 99;
	int random = min + rand() % (max - min + 1);

	return _ideas[random];
}
