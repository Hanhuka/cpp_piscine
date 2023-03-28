/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-g <ralves-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 16:31:11 by ralves-g          #+#    #+#             */
/*   Updated: 2023/03/28 15:11:54 by ralves-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"

int main()
{
	ClapTrap	joe("Joe");
	ClapTrap	joe2("Joe2");
	joe2 = joe;
	ClapTrap	jane("Jane");
	ClapTrap	jane2(jane);


for (int i = 0; i < 5; i++)
	joe2.attack("Jane");
for (int i = 0; i < 6; i++)
	joe2.beRepaired(10);
for (int i = 0; i < 2; i++)
	joe2.takeDamage(100);

for (int i = 0; i < 5; i++)
	jane2.attack("Joe");
for (int i = 0; i < 6; i++)
	jane2.beRepaired(10);
for (int i = 0; i < 2; i++)
	jane2.takeDamage(100);
}