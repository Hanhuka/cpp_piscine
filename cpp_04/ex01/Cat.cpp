/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-g <ralves-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 14:32:41 by ralves-g          #+#    #+#             */
/*   Updated: 2023/04/03 16:10:09 by ralves-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
std::cout << "Cat default constructor called" << std::endl;
_type = "Cat";
Animal::_type = "cat";
}

Cat::Cat(const Cat& ref) {
std::cout << "Cat copy constructor called" << std::endl;
_type = ref._type;
Animal::_type = ref.Animal::_type;
}

Cat&	Cat::operator=(const Cat& ref) {
std::cout << "Cat copy constructor called" << std::endl;
_type = ref._type;
Animal::_type = ref.Animal::_type;
return (*this);
}

void	Cat::makeSound() const {
	std::cout << "Meoooooow!" << std::endl;
}

std::string Cat::getType() const {
	return (_type);
}

Cat::~Cat() {
std::cout << "Cat destructor called" << std::endl;
}