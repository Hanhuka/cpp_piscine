/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-g <ralves-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 14:19:24 by ralves-g          #+#    #+#             */
/*   Updated: 2022/12/14 15:50:13 by ralves-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*ZombieHorde(int N, std::string zname);

int main(void) {

int n = 10;
Zombie *horde = ZombieHorde(n, "ZzZz");

for (int i = 0; i < n; i++)
	horde[i].announce();
delete [] horde;
}