/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: we <we@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 09:39:00 by we                #+#    #+#             */
/*   Updated: 2024/12/19 08:41:05 by we               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once
# ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
	public:
		void	think(void) const;
		void	makeSound(void) const;

		Cat(void);
		Cat(const Cat &other);
		~Cat(void);

		Cat	&operator = (const Cat &other);

	private:
		Brain	*_brain;
};

# endif
