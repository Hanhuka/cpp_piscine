/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-g <ralves-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 16:31:11 by ralves-g          #+#    #+#             */
/*   Updated: 2023/03/28 15:19:32 by ralves-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ScavTrap.hpp"
# include "FragTrap.hpp"

int main() {
FragTrap	joe("Joe");
FragTrap	joe2("Joe2");
joe2 = joe;
FragTrap	jane("Jane");
FragTrap	jane2(jane);

joe.highFiveGuys();
for (int i = 0; i < 50; i++)
	joe.beRepaired(10);
for (int i = 0; i < 51; i++)
	joe.attack("Jane");
joe.takeDamage(1000);
}