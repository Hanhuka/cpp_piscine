/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-g <ralves-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 10:47:22 by ralves-g          #+#    #+#             */
/*   Updated: 2022/12/15 14:32:21 by ralves-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void) {
	std::cout << "Zombie default constructor called" << std::endl;
	return ;
}

Zombie::~Zombie(void) {
	std::cout << "Zombie default destructor called" << std::endl;
	return ;
}

void	Zombie::setName(std::string const &zname)
{
	name = zname;
	return ;
}

void	Zombie::announce(void) {
	std::cout << name << ":  BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}