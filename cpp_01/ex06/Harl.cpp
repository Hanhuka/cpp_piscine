/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-g <ralves-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 14:23:11 by ralves-g          #+#    #+#             */
/*   Updated: 2022/12/15 16:03:33 by ralves-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void) {
	std::cout << "Harld default constructor called" << std::endl;
	type[0] = "DEBUG";
	type[1] = "INFO";
	type[2] = "WARNING";
	type[3] = "ERROR";
	return ;
}

Harl::~Harl(void) {

	std::cout << "Harld default destructor called" << std::endl;
	return ;
}	

void	Harl::complain(std::string level) {

	int i;
	for (i = 0; i < 4; i++) {
		if (level == type[i])
			break;
	}
	switch (i) {
		case 0:
			debug();
		case 1:
			info();
		case 2:
			warning();
		case 3:
			error();
			return ;
		case 4:
			std::cout << "[ Probably complaining about insignificant problems ]"  << std::endl;
	}
}

void	Harl::debug(void) {
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl << std::endl;
	return ;
}

void	Harl::info(void) {
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl << std::endl;
	return ;
}

void	Harl::warning(void) {
	std::cout << "[ WARNING ]" << std::endl;
	std::cout <<  "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl << std::endl;
	return ;
}

void	Harl::error(void) {
	std::cout << "[ ERROR ]"<< std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl << std::endl;
	return ;
}