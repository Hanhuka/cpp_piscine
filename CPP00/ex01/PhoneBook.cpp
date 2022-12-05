/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-g <ralves-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 14:25:53 by ralves-g          #+#    #+#             */
/*   Updated: 2022/12/05 16:03:26 by ralves-g         ###   ########.fr       */
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

void	PhoneBook::printHeader(void)
{
	std::cout << "\e[1;33m";
	std::cout << " " << std::string(43, '_') << std::endl;
	std::cout << "|          |          |          |          |" << std::endl;
	std::cout << "|     INDEX|FIRST NAME| LAST NAME|  NICKNAME|" << std::endl;
	std::cout << "|__________|__________|__________|__________|" << std::endl;
	std::cout << "\e[0m";
}

int	PhoneBook::indexSearch(void) {
	std::string	index;

	std::getline(std::cin, index);
	if (!std::cin)
		return (1);
	for (int i = 0; index[i]; i++)
	{
		if (index.length() == 0 || index[i] <= '0' || index[i] >= '9')
		{
			// std::cout << "\x1B[2J\x1B[H";
			std::cout << "\e[1;91mNot a valid index\e[0m" << std::endl;
			return 0;
		}
	}
	if (index.length() != 1 || index[0] == '9' || !c[index[0] - 49].status())
	{
		// std::cout << "\x1B[2J\x1B[H";
		std::cout << "\e[1;91mIndex out of range\e[0m" << std::endl;
		return 0;
	}
	std::cout << "\e[1;33mFIRST NAME    : \e[0m" << c[index[0] - 49].getParameter(1) << std::endl;
	std::cout << "\e[1;33mLAST NAME     : \e[0m" << c[index[0] - 49].getParameter(2) << std::endl;
	std::cout << "\e[1;33mNICKNAME      : \e[0m" << c[index[0] - 49].getParameter(3) << std::endl;
	std::cout << "\e[1;33mPHONE NUMBER  : \e[0m" << c[index[0] - 49].getParameter(4) << std::endl;
	std::cout << "\e[1;33mDARKEST SECRET: \e[0m" << c[index[0] - 49].getParameter(5) << std::endl;
	std::getline(std::cin, index);
	return (1);
}

void	PhoneBook::printParameter(int i, int i2) {

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

void	PhoneBook::printSearch(void) {

	if (!c[0].status())
	{
		std::cout << "\e[1;91mDamn... \e[1;91mIt's empty\e[0m" << std::endl;
		return ;
	}
	printHeader();
	for (int i = 0; i < 8; i++)
	{
		if (c[i].status())
		{
			std::cout << "\e[1;33m";
			std::cout << "|          |          |          |          |" << std::endl;
			std::cout << "|     \e[0m" << i + 1 << "    ";
			for (int i2 = 1; i2 < 4; i2++)
			{
				std::cout << "\e[1;33m";
				std::cout << "|";
				std::cout << "\e[0m";
				printParameter(i, i2);
			}
			std::cout << "\e[1;33m";
			std::cout << "|" << std::endl;
			std::cout << "|__________|__________|__________|__________|";
			std::cout << "\e[0m" << std::endl;
		}
	}
	std::cout << std::endl << std::endl;
	std::cout << "\e[1;33mType the\e[0m index \e[1;33mof the contact you want to display\e[0m" << std::endl;
	while (!indexSearch())
		;
		
}
