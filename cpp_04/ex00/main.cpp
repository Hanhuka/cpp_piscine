/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-g <ralves-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 14:33:01 by ralves-g          #+#    #+#             */
/*   Updated: 2023/04/27 12:39:16 by ralves-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal		*meta = new Animal();
	const Animal		*j = new Dog();
	const Animal		*i = new Cat();
	const WrongAnimal	*h = new WrongCat();
	
	std::cout << "type> "<< j->getType() << " " << std::endl;
	std::cout << "type> "<< i->getType() << " " << std::endl;
	std::cout << "type> "<< h->getType() << " " << std::endl;
	std::cout << "type> "<< meta->getType() << " " << std::endl;
	j->makeSound();
	i->makeSound();
	h->makeSound();
	meta->makeSound();
	delete meta;
	delete j;
	delete i;
	delete h;
	return 0;
}