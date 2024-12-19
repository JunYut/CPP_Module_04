/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: we <we@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 14:59:22 by we                #+#    #+#             */
/*   Updated: 2024/12/16 08:48:04 by we               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once
# ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

typedef std::string string;

class Brain
{
	public:
		Brain(void);
		Brain(const Brain &other);
		~Brain(void);

		Brain	&operator = (const Brain &other);

		string	getRandomIdea() const;

	private:
		string	_ideas[100];

		string	_ideaGenerator() const;

};

# endif