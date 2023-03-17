/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-g <ralves-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 11:47:10 by ralves-g          #+#    #+#             */
/*   Updated: 2023/03/17 15:05:37 by ralves-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap {
protected:
	ClapTrap();
	std::string _name;
	int	_HP;
	int	_Energy;
	int	_AD;
	static int const _repairCost = 1;
	static int const _attackCost = 1;

public:
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap& ref);
	ClapTrap&	operator=(const ClapTrap& copy);
	virtual void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	~ClapTrap();
};

#endif