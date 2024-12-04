/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: we <we@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 15:41:23 by we                #+#    #+#             */
/*   Updated: 2024/12/04 14:53:59 by we               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once
# ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal
{
	public:
		void	makeSound(void) const;

		const std::string	&getType(void) const;

		WrongAnimal(void);
		WrongAnimal(const WrongAnimal &other);
		~WrongAnimal(void);

		WrongAnimal &operator = (const WrongAnimal &other);

	protected:
		std::string _type;
};

# endif
