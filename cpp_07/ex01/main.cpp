/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-g <ralves-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 15:21:11 by ralves-g          #+#    #+#             */
/*   Updated: 2023/06/09 18:32:45 by ralves-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
# include "iter.hpp"

void	myIntFree(int *toFree)
{
	delete toFree;
}

void	printString(std::string str) {
	std::cout << str << std::endl;
}

int main() {
	int **test = new int*[10];
	for (int i = 0; i < 10; i++)
		test[i] = new (int);

	iter(test, 10, myIntFree);
	delete [] test;

	std::string test2[] = {"zero", "um", "dois", "tres", "quatro"};
	iter(test2, 5, printString);
}