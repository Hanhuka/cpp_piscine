/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-g <ralves-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 14:33:01 by ralves-g          #+#    #+#             */
/*   Updated: 2023/04/17 16:23:19 by ralves-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main() {
Dog *test;
Dog *test2;
Dog	*test3;

test = new Dog();
test2 = new Dog();
test3 = new Dog(*test);

std::cout << "\n[test IDEAS]\n";
test->ideas();
std::cout << "\n[test2 IDEAS]\n";
test2->ideas();
*test = *test2;

delete test2;
std::cout << "\n[test IDEAS should be equal to test2]\n";
test->ideas();
test3->ideas();
delete test;
delete test3;
}