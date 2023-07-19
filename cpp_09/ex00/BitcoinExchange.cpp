/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-g <ralves-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 14:33:26 by ralves-g          #+#    #+#             */
/*   Updated: 2023/07/19 15:11:04 by ralves-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <map>

int	isRightFormat(std::string line) {
	bool	dot = false;
	bool	number = false;
	int		i;
	double	test;

	if (line.length() < 14)
		return false;
	for (i = 0; i <= 12; i++)
	{
		if ((i == 4 || i == 7) && line[i] != '-')
			return 0;
		else if ((i == 10 || i == 12) && line[i] != ' ')
			return 0;
		else if ((i == 11) && line[i] != '|')
			return 0;
		else if (line[i] < '0' && line[i] > '9')
			return 0;
	}
	test = std::atof(line.substr(13).c_str());
	if (test < 0)
	{
		std::cout << "Error: not a positive number." << std::endl;
		return 1;
	}
	else if (test == 0 || test > 1000)
	{
		std::cout << "Error: too large a number." << std::endl;
		return 1;
	}
	for (i = 13; line[i] && ((line[i] >= '0' && line[i] <= '9') || line[i] == '.'); i++)
	{
		if (line[i] == '.')
		{
			if (dot)
				return 0;
			dot = true;
		}
		if (line[i] >= '0' && line[i] <= '9')
			number = true;
	}
	if (line[i] || !number)
		return 0;
	return 2;
}

bool	isValidDate(std::string date) {
	int year = std::atoi(date.c_str());
	std::string buffer = date.substr(date.find_first_not_of("0123456789") + 1);
	int month = std::atoi(buffer.c_str());
	buffer =  date.substr(date.find_first_not_of("0123456789", date.find_first_not_of("0123456789") + 1) + 1);
	int day = std::atoi(buffer.c_str());

	// std::cout << "Year: " << year << " Month: " << month << " Day: " << day << std::endl;
	if (year <= 0 || month <= 0 || day <= 0 || month > 12 || day > 31)
		return false;
	bool	isLeapYear = (year % 10 && !(year % 4)) ? true : false;
	if ((month == 4 || month == 6 | month == 9 || month == 11) && day > 30)
		return false;
	if (month == 2 && isLeapYear && day > 29)
			return false;
	if (month == 2 && !isLeapYear && day > 28)
			return false;
	return (true);
}

void	btcExchange(std::ifstream &input, std::ifstream &database_file) {
	int	format;
	std::string buffer;
	std::string tmp_buff;
	const char *tmp;
	std::map<std::string, double> database;
	std::map<std::string, double>::iterator iter;

	std::getline(database_file, buffer);
	while (std::getline(database_file, buffer))
	{
		tmp_buff = buffer.substr(buffer.find(",") + 1);
		tmp = tmp_buff.c_str();
		// std::cout << "inserting: " << buffer.substr(0, 10) << " and " << tmp << std::endl;
		database.insert(std::make_pair(buffer.substr(0, 10), std::atof(tmp)));
	}
	// for (std::map<std::string, double>::iterator i = database.begin(); i != database.end(); i++)
	// 	std::cout << "Date = " << i->first << " Value = " << i->second << std::endl;
	
	(void)input;
	while (std::getline(input, buffer))
	{
		format = isRightFormat(buffer);
		if (!format)
			std::cout << "Error: bad input -> " << buffer << std::endl;
		else if (format == 1)
			;
		else if (!isValidDate(buffer/*.substr(0, 10)*/))
		{
			std::cout << "Error: invalid date -> " << buffer.substr(0, 10) << std::endl;
		}
		else
		{
			// std::cout << "testing for: " << buffer.substr(0, 10) << std::endl;
			iter = database.upper_bound(buffer.substr(0, 10));
			if (iter != database.begin())
			{
				iter--;
				std::cout << buffer.substr(0, 11) << "=>" << buffer.substr(12) \
				<< " = " << (iter)->second * std::atof(buffer.substr(13).c_str()) << std::endl;
				//<< " Using - Date = " << iter->first << " Value = " << iter->second << std::endl;
			}
		}
	}
}