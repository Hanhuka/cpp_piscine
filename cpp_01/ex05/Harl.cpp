/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-g <ralves-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 14:23:11 by ralves-g          #+#    #+#             */
/*   Updated: 2022/12/15 15:30:19 by ralves-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void) {

	std::cout << "Harld default constructor called" << std::endl;
	funs[0].fun = &Harl::debug;
	funs[0].type = "DEBUG";
	funs[1].fun = &Harl::info;
	funs[1].type = "INFO";
	funs[2].fun = &Harl::warning;
	funs[2].type = "WARNING";
	funs[3].fun = &Harl::error;
	funs[3].type = "ERROR";
	return ;
}

Harl::~Harl(void) {

	std::cout << "Harld default destructor called" << std::endl;
	return ;
}	

void	Harl::complain(std::string level) {

	for (int i = 0; i < 4; i++)
	{
		if (funs[i].type == level)
			(this->*funs[i].fun)();
	}
}

void	Harl::debug(void) {

	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
	return ;
}

void	Harl::info(void) {

	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
	return ;
}

void	Harl::warning(void) {

	std::cout <<  "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
	return ;
}

void	Harl::error(void) {

	std::cout << "This is unacceptable! I want to speak to the manager now."  << std::endl;
	return ;
}