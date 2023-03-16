/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-g <ralves-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 11:56:24 by ralves-g          #+#    #+#             */
/*   Updated: 2023/03/14 13:47:07 by ralves-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"

ClapTrap::ClapTrap(){;}

ClapTrap::ClapTrap(std::string name)
{
	this->AD = 0;
	this->Energy = 10;
	this->HP = 10;
	std::cout << name <<" ClapTrap constructor called" << std::endl;
	this->name = name;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap& copy)
{
	this->name = copy.name;
	this->HP = copy.HP;
	this->AD = copy.AD;
	this->Energy = copy.Energy;
	return (*this);
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->HP && this->Energy < this->attackCost)
		std::cout << this->name << " can't perform the attack. Not enough energy" << std::endl;
	else if (this->HP)
	{
		std::cout << this->name << " attacked " << target << "for " << this->AD << " HP!"<< std::endl;
		this->Energy -= attackCost;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	amount = this->HP < (int)amount ? this->HP : amount;
	if (this->HP > 0)
	{
		std::cout << this->name << " lost " << amount << "HP" << std::endl;
		this->HP -= amount;
	}
	if (this->HP < 0)
		this->HP = 0;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->HP && this->Energy < this->repairCost)
		std::cout << this->name << " can't repair itself. Not enough energy :(" << std::endl;
	else if (this->HP)
	{
		std::cout << this->name << " repaired itself and gained " << amount << " HP" << std::endl;
		this->HP += amount;
		this->Energy -= this->repairCost;
	}
}

ClapTrap::~ClapTrap()
{
	std::cout << this->name << " ClapTrap destructor called" << std::endl;
}