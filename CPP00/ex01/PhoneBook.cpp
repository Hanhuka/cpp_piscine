/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-g <ralves-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 14:25:53 by ralves-g          #+#    #+#             */
/*   Updated: 2022/11/25 18:15:04 by ralves-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

PhoneBook::PhoneBook(void) {
	std::cout << "Constructor called" << std::endl;
	return ;
}

PhoneBook::~PhoneBook(void) {
	std::cout << "Destructor called" << std::endl;
	return ;
}

void	PhoneBook::print_header(void)
{
	std::cout << "\e[1;35m";
	std::cout << " " << std::string(43, '_') << std::endl;
	std::cout << "|          |          |          |          |" << std::endl;
	std::cout << "|     INDEX|FIRST NAME| LAST NAME|  NICKNAME|" << std::endl;
	std::cout << "|          |          |          |          |" << std::endl;
	std::cout << "\e[0m";
}

void	PhoneBook::print_parameter(int i, int i2)
{
	std::string print;

	if (c[i].getParameter(i2).length() < 9)
	{
		std::cout << std::setw(10);
		std::cout << c[i].getParameter(i2);
		return ;
	}
	for (int iter = 0; iter < 9; iter++)
		std::cout << c[i].getParameter(i2)[iter];
	if (c[i].getParameter(i2).length() == 10)
		std::cout << c[i].getParameter(i2)[9];
	else
		std::cout << ".";
}

void	PhoneBook::print_search(void)
{
	if (!c[0].status())
	{
		std::cout << "Damn... It's empty" << std::endl;
		return ;
	}
	print_header();
	for (int i = 0; i < 8; i++)
	{
		if (c[i].status())
		{
			std::cout << "\e[1;35m";
			std::cout << "|          |          |          |          |" << std::endl;
			std::cout << "|     \e[0m" << i + 1 << "    ";
			for (int i2 = 1; i2 < 4; i2++)
			{
				std::cout << "\e[1;35m";
				std::cout << "|";
				std::cout << "\e[0m";
				print_parameter(i, i2);
			}
			std::cout << "\e[1;35m";
			std::cout << "|" << std::endl;
			std::cout << "|__________|__________|__________|__________|";
			std::cout << "\e[0m";
		}
		std::cout << std::endl;
	}
}
