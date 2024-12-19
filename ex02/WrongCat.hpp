/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: we <we@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 09:39:00 by we                #+#    #+#             */
/*   Updated: 2024/12/04 13:59:47 by we               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once
# ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
		void	makeSound(void) const;

		const std::string	&getType(void) const;

		WrongCat(void);
		WrongCat(const WrongCat &other);
		~WrongCat(void);

		WrongCat	&operator = (const WrongCat &other);
};

# endif
