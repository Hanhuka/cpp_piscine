/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-g <ralves-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 11:56:24 by ralves-g          #+#    #+#             */
/*   Updated: 2023/03/28 15:04:29 by ralves-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"

ClapTrap::ClapTrap(){;}

ClapTrap::ClapTrap(std::string name)
{
	this->_AD = 0;
	this->_Energy = 10;
	this->_HP = 10;
	std::cout << name <<" ClapTrap constructor called" << std::endl;
	this->_name = name;
}

ClapTrap::ClapTrap(const ClapTrap& ref)
{
	std::cout << "ClapTrap copy constructor called" << std::endl;
	this->_name = ref._name;
	this->_HP = ref._HP;
	this->_AD = ref._AD;
	this->_Energy = ref._Energy;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap& copy)
{
	std::cout << "ClapTrap assignment operator called" << std::endl;
	this->_name = copy._name;
	this->_HP = copy._HP;
	this->_AD = copy._AD;
	this->_Energy = copy._Energy;
	return (*this);
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->_HP && this->_Energy < this->_attackCost)
		std::cout << this->_name << " can't perform the attack. Not enough energy" << std::endl;
	else if (this->_HP)
	{
		std::cout << this->_name << " attacked " << target << " for " << this->_AD << " HP!"<< std::endl;
		this->_Energy -= _attackCost;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	amount = this->_HP < (int)amount ? this->_HP : amount;
	if (this->_HP > 0)
	{
		std::cout << this->_name << " lost " << amount << "HP"  << std::endl;
		this->_HP -= amount;
	}
	if (this->_HP < 0)
		this->_HP = 0;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_HP && this->_Energy < this->_repairCost)
		std::cout << this->_name << " can't repair itself. Not enough energy :(" << std::endl;
	else if (this->_HP)
	{
		std::cout << this->_name << " repaired itself and gained " << amount << " HP" << std::endl;
		this->_HP += amount;
		this->_Energy -= this->_repairCost;
	}
}

ClapTrap::~ClapTrap()
{
	std::cout << this->_name << " ClapTrap destructor called" << std::endl;
}