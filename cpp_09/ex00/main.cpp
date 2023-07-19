/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-g <ralves-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 14:51:25 by ralves-g          #+#    #+#             */
/*   Updated: 2023/07/19 15:11:47 by ralves-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <iostream>
#include <fstream>
#include <algorithm>
#define BITC_DATABASE "data.csv"

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
		if (input.is_open())
		{
			input.close();
			std::cout << "Error: Couldn't open database file: [" << av[1] << "]" << std::endl;
		}
		if (database.is_open())
		{
			database.close();
			std::cout << "Error: Couldn't open input file: [" << BITC_DATABASE << "]" << std::endl;
		}
		return (1);
	}
	btcExchange(input, database);
}