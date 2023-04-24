/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-g <ralves-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 16:23:42 by ralves-g          #+#    #+#             */
/*   Updated: 2023/04/24 16:29:09 by ralves-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());//
	src->learnMateria(new Cure());//
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	delete bob;
	delete me;
	delete src;


	std::cout << "\n\n\n\n";
	src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	Character me2("me");
	tmp = src->createMateria("ice");
	me2.equip(tmp);
	tmp = src->createMateria("cure");
	me2.equip(tmp);
	src->createMateria("fire");
	ICharacter* clone = new Character(me2);
	

	std::cout << "[me2]" << std::endl;
	me2.use(0, *clone);
	me2.use(1, *clone);
	me2.unequip(1);
	me2.use(1, *clone);

	std::cout << "\n";

	std::cout << "[clone]" << std::endl;
	clone->use(0, *clone);
	clone->use(1, *clone);
	clone->use(2, *clone);
	
	delete tmp;
	delete clone;
	delete src;

	return 0;
}