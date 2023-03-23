/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-g <ralves-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 14:40:48 by ralves-g          #+#    #+#             */
/*   Updated: 2023/03/23 16:19:25 by ralves-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap {
private:
	std::string	_name;
	DiamondTrap();
public:
	DiamondTrap(const DiamondTrap& ref);
	DiamondTrap(const std::string name);
	DiamondTrap& operator=(const DiamondTrap& ref);
	~DiamondTrap();
	void	attack(const std::string target);
	void	whoAmI();
};


#endif