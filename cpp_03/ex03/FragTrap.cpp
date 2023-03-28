/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-g <ralves-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 14:46:26 by ralves-g          #+#    #+#             */
/*   Updated: 2023/03/28 15:19:03 by ralves-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() {
_HP = 100;
_AD = 30;
}

FragTrap::FragTrap(const std::string name) : ClapTrap(name) {
std::cout << name << " FragTrap constructor called" << std::endl;
_HP = 100;
_Energy = 100;
_AD = 30;
}

FragTrap::FragTrap(const FragTrap& ref) : ClapTrap(ref) {
std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& ref) {
std::cout << "FragTrap assignment operator called" << std::endl;
_HP = ref._HP;
_Energy = ref._Energy;
_AD = ref._AD;
_name = ref._name;
return *this;
}

void	FragTrap::highFiveGuys() {
	if (_HP > 0 && _Energy >= 0)
	std::cout << _name << " raises his hand energetically in hopes that someone highfives him..." << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << this->_name << " FragTrap destructor called" << std::endl;
}