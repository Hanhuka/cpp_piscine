/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-g <ralves-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 15:21:26 by ralves-g          #+#    #+#             */
/*   Updated: 2023/08/01 17:33:42 by ralves-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
# include <iostream>
# include <sys/time.h>

unsigned long	timeUs(void)
{
	struct timeval	tv;

	gettimeofday(&tv, NULL);
	return ((tv.tv_sec * 1000000) + (tv.tv_usec));
}

bool	checkArgs(std::string arg) {
	if (!arg.length())
		return false;
	if (arg.length() > 1 && arg[0] == '0')
		return false;
	for (int i = 0; arg[i]; i++)
	{
		if (arg[i] < '0' || arg[i] > '9')
			return false; 
	}
	if (std::atol(arg.c_str()) > std::numeric_limits<int>::max())
		return false;
	return true;
}

int main(int ac, char** av) {
	std::vector<int>	vtr;
	std::deque<int>		dqe;
	unsigned long start;
	unsigned long end;
	if (ac < 3)
	{
		std::cout << "Not enough arguments to sort" << std::endl;
		return 1;
	}
	for (int i = 1; i < ac; i++)
	{
		if (!checkArgs(av[i]))
		{
			std::cout << "Error: argument [" << i << "] is not a positive integer" << std::endl;
			return 1;
		}
	}
	std::cout << "Before: ";
	for (int i = 1; i < ac; i++)
	{
		std::cout << av[i] << " ";
	}
	std::cout << "\n" << std::endl;
	start = timeUs();
	for (int i = 1; i < ac; i++)
		vtr.push_back(std::atoi(av[i]));
	vectorSortAndMerge(vtr, 0, vtr.size() - 1);
	end = timeUs();
	std::cout << "After: ";
	for (std::vector<int>::iterator itr = vtr.begin(); itr != vtr.end(); itr++)
	{
		std::cout << *itr << " ";
	}
	std::cout << "\n" << std::endl;
	std::cout << "Time to process a range of 3000 elements with std::vector : " << end - start << " us" << std::endl;

	start = timeUs();
	for (int i = 1; i < ac; i++)
		dqe.push_back(std::atoi(av[i]));
	dequeSortAndMerge(dqe, 0, dqe.size() - 1);
	end = timeUs();

	std::cout << "Time to process a range of 3000 elements with std::deque : " << end - start << " us\n" << std::endl;
	// std::cout << "\n" << std::endl;
	// for (std::deque<int>::iterator itr = dqe.begin(); itr != dqe.end(); itr++)
	// {
	// 	std::cout << *itr << " ";
	// }
}