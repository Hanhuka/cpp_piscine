/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-g <ralves-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 14:19:24 by ralves-g          #+#    #+#             */
/*   Updated: 2022/12/12 11:28:11 by ralves-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	newZombie(std::string const &zname);

void	randomChump(std::string const &zname);

int main(void) {

Zombie *nZombie;

nZombie = newZombie("Albert");
randomChump("Joseph");
nZombie->announce();

delete nZombie;
}