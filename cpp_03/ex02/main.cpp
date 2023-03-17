/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-g <ralves-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 16:31:11 by ralves-g          #+#    #+#             */
/*   Updated: 2023/03/17 15:49:11 by ralves-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ScavTrap.hpp"
# include "FragTrap.hpp"

int main() {
ScavTrap	jane("Jane");
FragTrap	jane2("jane");

for (int i = 0; i < 50; i++)
	jane2.attack("joe");

}