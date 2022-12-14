/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-g <ralves-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 17:39:33 by ralves-g          #+#    #+#             */
/*   Updated: 2022/12/14 17:49:48 by ralves-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string const &n) {

	std::cout << "HumanB constructor called" << std::endl;
	name = n;
	return ;
}

HumanB::~HumanB(void) {

	std::cout << "HumanB destructor called" << std::endl;
	return ;
}

void	HumanB::setWeapon(Weapon w) {

	weapon = w;
	return ;
}

void	HumanB::attack(void) {

	std::cout << name << " attacks with their " << weapon.getType() << std::endl;
	return ;
}
