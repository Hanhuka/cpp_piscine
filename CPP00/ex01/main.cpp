/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-g <ralves-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 14:45:36 by ralves-g          #+#    #+#             */
/*   Updated: 2022/11/25 18:13:50 by ralves-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

void	screenClean(void)
{
	std::cout << "\x1B[2J\x1B[H";
}

int main()
{
	int i = 0;
	PhoneBook p;
	std::string	prompt;

	screenClean();
	while (1)
	{
		
		std::getline(std::cin, prompt);
		while (!prompt.length())
		{
			screenClean();
			std::getline(std::cin, prompt);
		}
		if (prompt == "EXIT")
			return (0);
		else if (prompt == "ADD")
		{
			screenClean();
			std::cout << "\e[1;33mAdding to contact slot [" << (i % 8) + 1 << "]\e[0m\n" << std::endl;
			p.c[i % 8].setContact();
			i++;
		}
		else if (prompt == "SEARCH")
		{
			screenClean();
			p.print_search();
		}
		else
			screenClean();
	}
}