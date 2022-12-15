/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-g <ralves-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 14:19:24 by ralves-g          #+#    #+#             */
/*   Updated: 2022/12/15 16:25:59 by ralves-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	newZombie(std::string const &zname);

void	randomChump(std::string const &zname);

int main(void) {

Zombie *nZombie;

nZombie = newZombie("Albert");
nZombie->announce();

std::cout << std::endl << std::endl;

randomChump("Joseph");

delete nZombie;
}