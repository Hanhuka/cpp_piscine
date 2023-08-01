/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-g <ralves-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 14:51:25 by ralves-g          #+#    #+#             */
/*   Updated: 2023/08/01 15:30:52 by ralves-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <iostream>
#include <fstream>
#include <algorithm>

int	main(int ac, char **av) {
	if (ac != 2)
	{
		std::cout << "Error: There must be one, and only one argument as a parameter" << std::endl;
		return (1);
	}
	std::ifstream database(BITC_DATABASE);
	std::ifstream input(av[1]);
	if (!database.is_open() || !input.is_open())
	{
		if (!database.is_open())
		{
			std::cout << "Error: Couldn't open database file: [" << av[1] << "]" << std::endl;
		}
		else
			database.close();
		if (!input.is_open())
		{
			std::cout << "Error: Couldn't open input file: [" << BITC_DATABASE << "]" << std::endl;
		}
		else
			input.close();
		return (1);
	}
	btcExchange(input, database);
}