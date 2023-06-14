/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-g <ralves-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 14:33:01 by ralves-g          #+#    #+#             */
/*   Updated: 2023/05/29 16:39:59 by ralves-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main() {
	int const animalCount = 4;
	
	Animal	*animal[animalCount];
	for (int i = 0; i < animalCount; i++)
	{
		if (i < animalCount/2)
			animal[i] = new Dog();
		else
			animal[i] = new Cat();
	}
	
	std::cout << "\n [Dogs test]\n" << std::endl;
	for (int i = 0; i < animalCount; i++)
	{
		if (i == animalCount/2)
			std::cout << "\n [Cats test]\n" << std::endl;
		animal[i]->ideas();
		animal[i]->makeSound();
		std::cout << std::endl;
	}
	for (int i = 0; i < animalCount; i++)
		if (animal[i])
			delete animal[i];

	std::cout << "\n\n [Assignment test]\n" << std::endl;
	
	Dog	*dog1 = new Dog();
	Dog	*dog2 = new Dog();
	Dog	*dog3 = new Dog(*dog1);
	
	std::cout << std::endl;
	
	std::cout << "\n [dog1 printIdeas]\n" << std::endl;
	dog1->ideas();
	std::cout << "\n [dog2 printIdeas]\n" << std::endl;
	dog2->ideas();
	std::cout << "\n [dog3 printIdeas should be equal to dog1]\n" << std::endl;
	dog3->ideas();
	std::cout << "\n [dog1 assigned to dog2 and dog1 deleted]\n" << std::endl;
	*dog2 = *dog1;
	delete dog1;
	std::cout << "\n [dog2 printIdeas should be equal to dog1]\n" << std::endl;
	dog2->ideas();
	
	delete dog2;
	delete dog3;
}