/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-g <ralves-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 14:32:41 by ralves-g          #+#    #+#             */
/*   Updated: 2023/04/12 15:52:17 by ralves-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
	std::cout << "Cat default constructor called" << std::endl;
	_type = "Cat";
	_brain = new Brain();
	Animal::_type = "cat";
}

Cat::Cat(const Cat& ref) {
	std::cout << "Cat copy constructor called" << std::endl;
	_type = ref._type;
	_brain = new Brain(*(ref._brain));
	Animal::_type = ref.Animal::_type;
}

Cat&	Cat::operator=(const Cat& ref) {
	std::cout << "Cat assignment operator called" << std::endl;
	_type = ref._type;
	_brain = new Brain(*(ref._brain));
	Animal::_type = ref.Animal::_type;
	return (*this);
}

void	Cat::makeSound() const {
	std::cout << "Meoooooow!" << std::endl;
}

void	Cat::ideas() const {
for (int i = 0; i < 100; i++)
	std::cout << _brain->giveIdeas()[i] << " ";
std::cout << std::endl;
}

std::string Cat::getType() const {
	return (_type);
}

Cat::~Cat() {
	std::cout << "Cat destructor called" << std::endl;
	delete _brain;
}