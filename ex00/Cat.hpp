/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: we <we@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 09:39:00 by we                #+#    #+#             */
/*   Updated: 2024/12/04 10:01:24 by we               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once
# ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat : public Animal
{
	public:
		void	makeSound(void) const override;

		const std::string	&getType(void) const override;

		Cat(void);
		Cat(const Cat &other);
		~Cat(void);

		Cat	&operator = (const Cat &other);
};

# endif
