/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-g <ralves-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 16:31:11 by ralves-g          #+#    #+#             */
/*   Updated: 2023/03/28 15:22:35 by ralves-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main() {
DiamondTrap	joe("Joe");
DiamondTrap	joe2("Joe2");
joe2 = joe;
DiamondTrap	jane("Jane");
DiamondTrap	jane2(jane);

joe.whoAmI();
for (int i = 0; i < 25; i++)
	joe.beRepaired(10);
for (int i = 0; i < 26; i++)
	joe.attack("Jane");
joe.takeDamage(1000);
}