/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-g <ralves-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 16:18:29 by ralves-g          #+#    #+#             */
/*   Updated: 2023/05/04 16:59:27 by ralves-g         ###   ########.fr       */
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
	try
	{
		Bureaucrat	goodBoy("Allgud", 1);
		std::cout << goodBoy;
		goodBoy.decrementGrade();
		std::cout << goodBoy;
		goodBoy.incrementGrade();
		goodBoy.incrementGrade();
	}
	catch (std::exception& e)
	{
		std::cout << e.what();
	}
}