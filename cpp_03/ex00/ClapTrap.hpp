/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-g <ralves-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 11:47:10 by ralves-g          #+#    #+#             */
/*   Updated: 2023/03/14 13:46:28 by ralves-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap {
private:
	ClapTrap();
	std::string name;
	int	HP;
	int	Energy;
	int	AD;
	static int const repairCost = 1;
	static int const attackCost = 1;

public:
	ClapTrap(std::string name);
	ClapTrap&	operator=(const ClapTrap& copy);
	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	~ClapTrap();
};

#endif