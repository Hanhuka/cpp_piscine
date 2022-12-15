/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-g <ralves-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 14:09:06 by ralves-g          #+#    #+#             */
/*   Updated: 2022/12/15 14:30:11 by ralves-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string const &n, Weapon &w) {
	std::cout << "HumanA default constructor called" << std::endl;
	name = n;
	weapon = &w;
	return ;
}

HumanA::~HumanA(void) {
	std::cout << "HumanA default destructor called" << std::endl;
	return ;
}

void	HumanA::attack(void)
{
	std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}
