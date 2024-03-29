/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-g <ralves-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 17:18:22 by ralves-g          #+#    #+#             */
/*   Updated: 2023/06/05 14:36:32 by ralves-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cstdlib>
#include "ScalarConverter.hpp"

int main(int ac, char** av) {
	if (ac != 2)
	{
		std::cerr << "Error : Wrong number of arguments!" << std::endl;
		return (1);
	}
	ScalarConverter::converter(av[1]);
	// std::cout << -10.1f << std::endl;
}