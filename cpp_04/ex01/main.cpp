/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-g <ralves-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 14:33:01 by ralves-g          #+#    #+#             */
/*   Updated: 2023/04/12 16:06:18 by ralves-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
// Animal	*dogsAndCats[10];
// // dogsAndCats = new Animal*[10];

// for (int i = 0; i < 10; i++)
// {
// 	if (i < 5)
// 		dogsAndCats[i] = new Dog();
// 	else
// 		dogsAndCats[i] = new Cat();
// }
// for (int i = 0;  i <10; i++)
// 	dogsAndCats[i]->ideas();
// for (int i = 0;  i <10; i++)
// 	delete dogsAndCats[i];
// delete [] dogsAndCats;

// Animal *test;
// Animal *test2;
// Dog *test;
// Dog *test2;

// test = new Dog();
// test2 = new Dog();

Dog test;
Dog test2;

std::cout << "\n[test IDEAS]\n";
test.ideas();
std::cout << "\n[test2 IDEAS]\n";
test2.ideas();
test = test2;
// test = new Dog(*test2);

std::cout << "\n[test IDEAS should be equal to test2]\n";
test.ideas();
// delete test;
// delete test2;
}