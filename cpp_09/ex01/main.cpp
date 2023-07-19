/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-g <ralves-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 14:51:25 by ralves-g          #+#    #+#             */
/*   Updated: 2023/07/19 17:45:28 by ralves-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int	main(int ac, char **av) {
	if (ac != 2)
	{
		std::cout << "Error: There must be one, and only one argument as a parameter" << std::endl;
		return (1);
	}
	rpnAlgorithm(av[1]);
}