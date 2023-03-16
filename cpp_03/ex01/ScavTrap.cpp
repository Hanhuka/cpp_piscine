/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-g <ralves-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 16:11:24 by ralves-g          #+#    #+#             */
/*   Updated: 2023/03/16 16:27:04 by ralves-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ScavTrap.hpp"

ScavTrap::ScavTrap() {}


ScavTrap::ScavTrap(const std::string& name) {
	std::cout << name <<" ScavTrap constructor called" << std::endl;
	HP = 100;
	Energy = 50;
	AD = 20;
}

ScavTrap::ScavTrap(const ScavTrap& ref) {
	std::cout << "ScavTrap copy constructor called" << std::endl;
	HP = ref.HP;
	Energy = ref.Energy;
	AD = ref.AD;
	name = ref.name;
}
