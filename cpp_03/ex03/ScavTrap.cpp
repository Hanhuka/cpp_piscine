/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-g <ralves-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 16:11:24 by ralves-g          #+#    #+#             */
/*   Updated: 2023/03/23 16:09:57 by ralves-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
_Energy = 50;
}

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name) {
std::cout << name <<" ScavTrap constructor called" << std::endl;
_HP = 100;
_Energy = 50;
_AD = 20;
}

ScavTrap::ScavTrap(const ScavTrap& ref) : ClapTrap(ref){
std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& ref) {
std::cout << "ScavTrap assignment operator called" << std::endl;
_HP = ref._HP;
_Energy = ref._Energy;
_AD = ref._AD;
_name = ref._name;
return *this;
}

void ScavTrap::attack(const std::string& target) {
	if (this->_HP && this->_Energy < this->_attackCost)
		std::cout << this->_name << " can't perform the attack. Not enough energy" << std::endl;
	else if (this->_HP)
	{
		std::cout << this->_name << " ScavTrap attacked " << target << " for " << this->_AD << " HP!"<< std::endl;
		this->_Energy -= _attackCost;
	}
}

void	ScavTrap::guardGate()
{
	if (_HP <= 0 && _Energy)
		std::cout << _name << " is now in Gate keeper mode" << std::endl;
	if (_HP)
		std::cout << _name << " does not have the energy to perform such task" << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << _name << " ScavTrap destructor called" << std::endl;
}
