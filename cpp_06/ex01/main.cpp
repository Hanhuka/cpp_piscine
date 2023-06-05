/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-g <ralves-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 18:00:40 by ralves-g          #+#    #+#             */
/*   Updated: 2023/06/05 14:50:10 by ralves-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include "Serializer.hpp"

int main()
{
	std::cout << sizeof(uintptr_t) << std::endl;
	std::cout << sizeof(Data *) << std::endl;
	{
		Data* test = new Data();

		std::cout << test << std::endl;
		test->printData();
		test = Serializer::deserialize(Serializer::serialize(test));
		std::cout << test << std::endl;
		test->printData();
		delete test;
	}
	std::cout << "\n\n";
	{
		Data* test2 = new Data(123456789);

		std::cout << test2 << std::endl;
		test2->printData();
		test2 = Serializer::deserialize(Serializer::serialize(test2));
		std::cout << test2 << std::endl;
		test2->printData();
		delete test2;
	}
}
