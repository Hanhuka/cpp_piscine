/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-g <ralves-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 17:39:33 by ralves-g          #+#    #+#             */
/*   Updated: 2022/12/15 14:30:00 by ralves-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string const &n) {

	std::cout << "HumanB default constructor called" << std::endl;
	this->name = n;
	this->weapon = NULL;
	return ;
}

HumanB::~HumanB(void) {

	std::cout << "HumanB default destructor called" << std::endl;
	return ;
}

void	HumanB::setWeapon(Weapon &w) {

	this->weapon = &w;
	return ;
}

void	HumanB::attack(void) {

	if (this->weapon)
		std::cout << name << " attacks with their " << weapon->getType() << std::endl;
	else
		std::cout << name << " attacks with his bare fists" << std::endl;
	return ;
}
