/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: we <we@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 15:41:22 by we                #+#    #+#             */
/*   Updated: 2024/12/04 14:47:54 by we               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Animal.hpp"
# include "Cat.hpp"
# include "Dog.hpp"
# include "WrongAnimal.hpp"
# include "WrongCat.hpp"

using std::cout;
using std::endl;

int main(void)
{
	{
		const Animal *meta = new Animal();
		const Animal *dog = new Dog();
		const Animal *cat = new Cat();

		cout << dog->getType() << endl;
		cout << cat->getType() << endl;
		dog->makeSound();
		cat->makeSound();
		meta->makeSound();

		delete meta;
		delete dog;
		delete cat;
	}
	cout << endl;
	{
		Animal meta;
		Dog dog;
		Cat cat;

		const Animal& refDog = dog;
		const Animal& refCat = cat;

		cout << refDog.getType() << endl;
		cout << refCat.getType() << endl;
		refDog.makeSound();
		refCat.makeSound();
		meta.makeSound();
	}
	cout << endl;
	{
		const WrongAnimal *meta = new WrongAnimal();
		const WrongAnimal *cat = new WrongCat();

		cout << cat->getType() << endl;
		cat->makeSound();
		meta->makeSound();

		delete meta;
		delete cat;
	}

	return (0);
}
