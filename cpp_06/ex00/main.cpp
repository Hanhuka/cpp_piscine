/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-g <ralves-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 17:18:22 by ralves-g          #+#    #+#             */
/*   Updated: 2023/05/31 16:05:57 by ralves-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cstdlib>
#include "ScalarConverter.hpp"

int main() {
	int min = (1 << ((sizeof(int) * 8) - 1));
	int	max = -1 ^ min;
	int test = -__INT_MAX__ - 1;


	std::cout << test << std::endl;
	// float val = 0;
	// for (unsigned long bit = 0; bit < (sizeof(float)) * 8; bit++)
	// 	val |= (1.0f << static_cast<float>(bit));
	std::cout << "int [min]: " << min << " [max]: " << max << std::endl;
	// std::cout << "[val]: " << val << std::endl;
	// std::cout << atof("\n\n\n 9\n\n") << std::endl;
	ScalarConverter::converter("21492223423423.234");
}