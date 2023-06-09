/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-g <ralves-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 15:21:11 by ralves-g          #+#    #+#             */
/*   Updated: 2023/06/09 18:21:44 by ralves-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
# include "Array.hpp"

int main() {
	{
		Array<unsigned int> test(0);
	
		std::cout << "test has a size of " << test.size() << std::endl;
		try {
			test[0] = 10;
			std::cout << test[0] << std::endl;
		}
		catch (std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	std::cout << "\n";
	{
		Array<std::string> test(6);
	
		std::cout << "test has a size of " << test.size() << std::endl;
		try {
			test[0] = "ola";
			test[1] = "alo";
			test[2] = "hi";
			test[3] = "hey";
			test[4] = "wassup";
			test[5] = "yo";
			for (int i = 0; i < test.size(); i++)
				std::cout << "test[" << i << "] = " << test[i] << std::endl;
		}
		catch (std::exception& e)
		{
			std::cout << e.what() << std::endl;
		}
		std::cout << "\n";
		Array<std::string> test2(0);
		try {
			test2 = test;
			for (int i = 0; i < test2.size(); i++)
				std::cout << "test2[" << i << "] = " << test2[i] << std::endl;
		}
		catch (std::exception& e) {
			std::cerr << e.what() << std::endl;
		}
		std::cout << "\n";
		Array<std::string> test3(test2);
		try {
			for (int i = 0; i < test3.size(); i++)
				std::cout << "test3[" << i << "] = " << test3[i] << std::endl;
		}
		catch (std::exception& e) {
			std::cerr << e.what() << std::endl;
		}
		
	}
}