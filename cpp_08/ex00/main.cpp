/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-g <ralves-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 17:02:47 by ralves-g          #+#    #+#             */
/*   Updated: 2023/07/05 17:10:14 by ralves-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "easyfind.hpp"
# include <iostream>
# include <vector>
# include <deque>
# include <list>

int main()
{
	std::vector<int> test;

	test.insert(test.end(), 10);
	test.insert(test.end(), -102);
	test.insert(test.end(), 1);
	test.insert(test.end(), 97);
	test.insert(test.end(), 12);
	test.insert(test.end(), 13);
	test.insert(test.end(), 222);
	test.insert(test.end(), 40);

	try {
		std::cout << easyfind(test, 0) << "\n" << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	std::list<int> test0;

	test0.insert(test0.end(), 10);
	test0.insert(test0.end(), -102);
	test0.insert(test0.end(), 1);
	test0.insert(test0.end(), 97);
	test0.insert(test0.end(), 12);
	test0.insert(test0.end(), 13);
	test0.insert(test0.end(), 222);
	test0.insert(test0.end(), 40);

	try {
		std::cout << easyfind(test0, 97) << "\n" << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
}