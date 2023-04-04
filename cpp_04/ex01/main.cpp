/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-g <ralves-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 14:33:01 by ralves-g          #+#    #+#             */
/*   Updated: 2023/04/04 16:35:51 by ralves-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
Animal	*dogsAndCats[10];
// dogsAndCats = new Animal*[10];

for (int i = 0; i < 10; i++)
{
	if (i < 5)
		dogsAndCats[i] = new Dog();
	else
		dogsAndCats[i] = new Cat();
}
for (int i = 0;  i <10; i++)
	dogsAndCats[i]->ideas();
for (int i = 0;  i <10; i++)
	delete dogsAndCats[i];
// delete [] dogsAndCats;
}