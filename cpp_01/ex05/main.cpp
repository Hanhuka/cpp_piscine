/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-g <ralves-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 14:23:13 by ralves-g          #+#    #+#             */
/*   Updated: 2022/12/15 16:15:56 by ralves-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void)
{
	Harl harl;

	std::cout << std::endl << "[ MAIN ] DEBUG" << std::endl;
	harl.complain("DEBUG");
	std::cout << std::endl << "[ MAIN ] INFO" << std::endl;
	harl.complain("INFO");
	std::cout << std::endl << "[ MAIN ] WARNING" << std::endl;
	harl.complain("WARNING");
		std::cout << std::endl << "[ MAIN ] ERROR" << std::endl;
	harl.complain("ERROR");
	std::cout << std::endl << "[ MAIN ] Random text" << std::endl;
	harl.complain("Random text");
}
