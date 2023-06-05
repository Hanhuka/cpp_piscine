/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-g <ralves-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 15:59:19 by ralves-g          #+#    #+#             */
/*   Updated: 2023/06/01 17:56:18 by ralves-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <cstdlib>
#include <ctime>
#include <iostream>

Base*	generate(void) {
	int	opt;

	srand(time(NULL));
	opt = rand() % 3;
	switch (opt) {
		case 1:
			std::cout << "New A created!" << std::endl;
			return (new A);
		case 2:
			std::cout << "New B created!" << std::endl;
			return (new B);
		default:
			std::cout << "New C created!" << std::endl;
			return (new C);
	}
}

void	identify(Base* p) {
	if (dynamic_cast<A *>(p))
	{
		std::cout << "[REF] Type Identified! [A]" << std::endl;
		return ;
	}
	if (dynamic_cast<B *>(p))
	{
		std::cout << "[REF] Type Identified! [B]" << std::endl;
		return ;
	}
	if (dynamic_cast<C *>(p))
	{
		std::cout << "[REF] Type Identified! [C]" << std::endl;
		return ;
	}
}

void	identify(Base& p) {	
	try {
		A testA = dynamic_cast<A&>(p);
		std::cout << "[PTR] Type Identified! [A]" << std::endl;
		return ;
	}
	catch (std::exception e) {}
	try {
		B testB = dynamic_cast<B&>(p);
		std::cout << "[PTR] Type Identified! [B]" << std::endl;
		return ;
	}
	catch (std::exception e) {}
	try {
		C testC = dynamic_cast<C&>(p);
		std::cout << "[PTR] Type Identified! [C]" << std::endl;
		return ;
	}
	catch (std::exception e) {}
}