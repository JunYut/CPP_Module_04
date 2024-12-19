/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: we <we@student.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 15:41:22 by we                #+#    #+#             */
/*   Updated: 2024/12/19 09:45:44 by we               ###   ########.fr       */
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

		for (i =0; i < 10; ++i)
			animal[i]->makeSound();

		for (i = 0; i < 10; ++i)
			delete animal[i];
	}
	cout << "\n_____CAT ASSIGNMENT OPERATOR_____" << endl;
	{
		Cat a;
		a.think();

		Cat b = a;
		b.think();
	}
	cout << "\n_____CAT COPY CONSTRUCTOR_____" << endl;
	{
		Cat a;
		a.think();

		Cat b(a);
		b.think();
	}
	cout << "\n_____CAT COPY CONSTRUCTOR_____" << endl;
	{
		Cat a;
		a.think();

		Cat b;
		b = a;
		b.think();
	}
	cout << "\n_____CAT ALLOCATE_____" << endl;
	{
		Cat a;
		a.think();

		Cat *b = new Cat(a);
		b->think();
		delete b;
	}
	cout << "\n_____CAT ALLOCATE 2_____" << endl;
	{
		Cat *a = new Cat();
		a->think();

		Cat *b = new Cat(*a);
		b->think();

		delete a;
		delete b;
	}
	cout << "\n_____DOG ASSIGNMENT OPERATOR_____" << endl;
	{
		Dog a;
		a.think();

		Dog b = a;
		b.think();
	}
	cout << "\n_____DOG COPY CONSTRUCTOR_____" << endl;
	{
		Dog a;
		a.think();

		Dog b(a);
		b.think();
	}
	cout << "\n_____DOG ALLOCATE_____" << endl;
	{
		Dog a;
		a.think();

		Dog *b = new Dog(a);
		b->think();
		delete b;
	}
	cout << "\n_____DOG ALLOCATE 2_____" << endl;
	{
		Dog *a = new Dog();
		a->think();

		Dog *b = new Dog(*a);
		b->think();

		delete a;
		delete b;
	}

	return (0);
}
