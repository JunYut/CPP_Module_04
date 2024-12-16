/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: we <we@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 15:41:22 by we                #+#    #+#             */
/*   Updated: 2024/12/16 09:18:58 by we               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Animal.hpp"
# include "Cat.hpp"
# include "Dog.hpp"
# include "WrongAnimal.hpp"
# include "WrongCat.hpp"
# include "Brain.hpp"

using std::cout;
using std::endl;

int main(void)
{
	{
		Animal *animal[10];
		int i = 0;

		while (i < 5)
			animal[i++] = new Dog();
		while (i < 10)
			animal[i++] = new Cat();

		animal[0]->makeSound();
		animal[9]->makeSound();

		for (i = 0; i < 10; ++i)
			delete animal[i];
	}
	cout << endl;
	{
		Cat a;
		a.think();

		Cat b = a;
		b.think();
	}

	return (0);
}
