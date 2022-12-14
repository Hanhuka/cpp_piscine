/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-g <ralves-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 13:00:34 by ralves-g          #+#    #+#             */
/*   Updated: 2022/12/14 15:38:36 by ralves-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void) {

	std::cout << "Weapon constructor called" << std::endl;
	return ;
}

Weapon::Weapon(std::string const &n) {

	std::cout << "Weapon constructor called" << std::endl;
	type = n;
	return ;
}

Weapon::~Weapon(void) {

	std::cout << "Weapon destructor called" << std::endl;
	return ;
}

void	Weapon::setType(std::string const &newType)
{
	type = newType;
	return ;
}

std::string const &Weapon::getType(void)
{
	return (type);
}