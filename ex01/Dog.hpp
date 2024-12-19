/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: we <we@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 16:04:53 by we                #+#    #+#             */
/*   Updated: 2024/12/19 08:41:15 by we               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once
# ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
	public:
		void	think(void) const;
		void	makeSound(void) const;

		Dog(void);
		Dog(const Dog &other);
		~Dog(void);

		Dog	&operator = (const Dog &other);

	private:
		Brain	*_brain;
};

# endif
