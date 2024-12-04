/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: we <we@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 14:59:22 by we                #+#    #+#             */
/*   Updated: 2024/12/04 15:49:07 by we               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once
# ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <sstream>

class Brain
{
	public:
		Brain(void);
		Brain(const Brain &other);
		~Brain(void);

		Brain	&operator = (const Brain &other);

	private:
		std::string	_ideas[100];

};

# endif
