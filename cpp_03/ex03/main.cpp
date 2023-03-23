/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-g <ralves-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 16:31:11 by ralves-g          #+#    #+#             */
/*   Updated: 2023/03/23 16:23:04 by ralves-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main() {
DiamondTrap	jane("Jane");
DiamondTrap	jane2("jane");

jane.whoAmI();

for (int i = 0; i < 5; i++)
	jane2.attack("joe");
}