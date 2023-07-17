/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-g <ralves-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 14:33:26 by ralves-g          #+#    #+#             */
/*   Updated: 2023/07/17 18:35:22 by ralves-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <map>

bool	isValidDate(std::string date) {
	int year = std::atoi(date.c_str());
	std::string buffer = date.substr(date.find_first_not_of("0123456789") + 1);
	int month = std::atoi(buffer.c_str());
	buffer =  date.substr(date.find_first_not_of("0123456789", date.find_first_not_of("0123456789") + 1) + 1);
	int day = std::atoi(buffer.c_str());

	std::cout << "Year: " << year << " Month: " << month << " Day: " << day << std::endl;

	if (month > 12 || day > 31 || year <= 0 || month <= 0 || day <= 0)
		return (false);
	return (true);
}

void	btcExchange(std::ifstream &input, std::ifstream &database_file) {
	std::string buffer;
	std::string tmp_buff;
	const char *tmp;
	std::map<std::string, double> database;
	// std::map<int , int> database;
	std::getline(database_file, buffer);
	while (std::getline(database_file, buffer))
	{
		tmp_buff = buffer.substr(buffer.find(",") + 1);
		tmp = tmp_buff.c_str();
		std::cout << "inserting: " << buffer.substr(0, 10) << " and " << tmp << std::endl;
		database.insert(std::make_pair(buffer.substr(0, 10), std::atof(tmp))); //?????????????????
		// database.insert(buffer.substr(0, 10), std::atof(tmp));
		// database.insert({buffer.substr(0, 10), std::atof(tmp)});
		// database.insert({1, 2});
		// database.insert(std::make_pair(1, 2));
	}
	for (std::map<std::string, double>::iterator i = database.begin(); i != database.end(); i++)
		std::cout << "Date = " << i->first << " Value = " << i->second << std::endl;
	
	(void)input;
	while (std::getline(input, buffer))
	{
		// if (buffer.length() < 14)
		// {
		// 	std::cout << "Error: bad input -> " << buffer << std::endl;
		// 	continue ;
		// }
		if (!isValidDate(buffer.substr(0, 10)))
		{
			;
		}
	}
}