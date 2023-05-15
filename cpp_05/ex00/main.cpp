/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-g <ralves-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 16:18:29 by ralves-g          #+#    #+#             */
/*   Updated: 2023/05/15 16:59:13 by ralves-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main() {
	try
	{
		Bureaucrat	fail("Failure", 151);
		std::cout << fail;
	}
	catch (std::exception & e)
	{
		std::cout << "Error!" << std::endl; 
	}
	Bureaucrat	goodBoy("Allgud", 1);
	try
	{
		std::cout << goodBoy;
		goodBoy.decrementGrade();
		std::cout << goodBoy;
		goodBoy.incrementGrade();
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	Bureaucrat	test(goodBoy);
	try
	{
		goodBoy.incrementGrade();
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		test.incrementGrade();
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
}