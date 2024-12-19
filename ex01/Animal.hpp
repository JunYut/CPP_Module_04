/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: we <we@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 15:41:23 by we                #+#    #+#             */
/*   Updated: 2024/12/19 08:34:18 by we               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once
# ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
	public:
		virtual void	makeSound(void) const;

		const std::string	&getType(void) const;

		Animal(void);
		Animal(const Animal &other);
		virtual ~Animal(void);

		Animal &operator = (const Animal &other);

	protected:
		std::string _type;
};

# endif
