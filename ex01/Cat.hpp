/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: we <we@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 09:39:00 by we                #+#    #+#             */
/*   Updated: 2024/12/04 15:54:49 by we               ###   ########.fr       */
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
		void	makeSound(void) const;

		const std::string	&getType(void) const;

		Cat(void);
		Cat(const Cat &other);
		~Cat(void);

		Cat	&operator = (const Cat &other);

	private:
		Brain	*_brain;
};

# endif
