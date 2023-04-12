/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-g <ralves-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 14:32:51 by ralves-g          #+#    #+#             */
/*   Updated: 2023/04/12 16:09:18 by ralves-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
	std::cout << "Dog default constructor called" << std::endl;
	_type = "Dog";
	_brain = new Brain();
	Animal::_type = "dog";
}

Dog::Dog(const Dog& ref) {
	std::cout << "Dog copy constructor called" << std::endl;
	_brain = new Brain();
	*this = ref;
}

Dog&	Dog::operator=(const Dog& ref) {
	std::cout << "Dog assignment operator called" << std::endl;
	if (this != &ref)
		*(this->_brain) = *(ref._brain);
	return (*this);
}

void	Dog::makeSound() const {
	std::cout << "Woooof woof" << std::endl;
}

void	Dog::ideas() const {
for (int i = 0; i < 100; i++)
	std::cout << _brain->giveIdeas()[i] << " ";
std::cout << std::endl;
}

std::string Dog::getType() const {
	return (_type);
}

Dog::~Dog() {
	std::cout << "Dog destructor called" << std::endl;
	delete _brain;
}