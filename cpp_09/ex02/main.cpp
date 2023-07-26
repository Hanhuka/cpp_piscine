/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-g <ralves-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 15:21:26 by ralves-g          #+#    #+#             */
/*   Updated: 2023/07/26 17:17:08 by ralves-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
# include <iostream>

bool	checkArgs(std::string arg) {
	for (int i = 0; arg[i]; i++)
	{
		if (arg[i] < '0' || arg[i] > '9')
			return false; 
	}
	if (std::atoi(arg.c_str()) > std::numeric_limits<int>::max())
		return false;
	return true;
}

int main(int ac, char** av) {
	std::vector<int>	vtr;
	std::deque<int>		dqe;
	if (ac < 3)
	{
		std::cout << "Not enough arguments to sort" << std::endl;
	}
	for (int i = 1; i < ac; i++)
	{
		if (!checkArgs(av[i]))
		{
			std::cout << "Error: argument [" << i << "] is not a positive integer" << std::endl;
			return 1;
		}
		vtr.push_back(std::atoi(av[i]));
		dqe.push_back(std::atoi(av[i]));
	}
	vectorSortAndMerge(vtr, 0, ac - 2);
	dequeSortAndMerge(dqe, 0, ac - 2);
	for (std::vector<int>::iterator itr = vtr.begin(); itr != vtr.end(); itr++)
	{
		std::cout << *itr << " ";
	}
	std::cout << std::endl;
	for (std::deque<int>::iterator itr = dqe.begin(); itr != dqe.end(); itr++)
	{
		std::cout << *itr << " ";
	}
	std::cout << std::endl;
}