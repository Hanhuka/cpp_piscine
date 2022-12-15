/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-g <ralves-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 13:00:34 by ralves-g          #+#    #+#             */
/*   Updated: 2022/12/15 14:30:51 by ralves-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string const &n) {

	std::cout << "Weapon default constructor called" << std::endl;
	type = n;
	return ;
}

Weapon::~Weapon(void) {

	std::cout << "Weapon default destructor called" << std::endl;
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