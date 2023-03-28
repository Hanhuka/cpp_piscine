/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-g <ralves-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 14:40:52 by ralves-g          #+#    #+#             */
/*   Updated: 2023/03/28 14:07:05 by ralves-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() {};

DiamondTrap::DiamondTrap(const DiamondTrap& ref) : ClapTrap(ref._name + "_clap_name"), ScavTrap(), FragTrap(){
std::cout << "DiamondTrap copy constructor called" << std::endl;
_HP = ref._HP;
_Energy = ref._Energy;
_AD = ref._AD;
_name = ref._name;
}

DiamondTrap::DiamondTrap(const std::string name): ClapTrap(name + "_clap_name"), ScavTrap(), FragTrap() {
_name = name;
std::cout << name << " DiamondTrap constructor called" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& ref) {
std::cout << "DiamondTrap assignment operator called" << std::endl;
ClapTrap::_name = ref.ClapTrap::_name;
_HP = ref._HP;
_Energy = ref._Energy;
_AD = ref._AD;
_name = ref._name;
return *this;
}

DiamondTrap::~DiamondTrap() {
std::cout << _name << " DiamondTrap destructor called" << std::endl;
}

void	DiamondTrap::attack(const std::string target) {ScavTrap::attack(target);}

void	DiamondTrap::whoAmI() {
std::cout << "I'm " << _name << " base model " << ClapTrap::_name << std::endl;
}
