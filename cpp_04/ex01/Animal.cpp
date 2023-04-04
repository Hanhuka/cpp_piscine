/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-g <ralves-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 14:32:48 by ralves-g          #+#    #+#             */
/*   Updated: 2023/04/04 16:49:11 by ralves-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Animal.hpp"

Animal::Animal() {
	std::cout << "Default Animal constructor called" << std::endl;
	_type = "[Redacted]";
}

Animal::Animal(const Animal& ref) {
	std::cout << "Animal copy constructor called" << std::endl;
	_type = ref._type;
}

Animal& Animal::operator=(const Animal& ref) {
	std::cout << "Animal assignment operator called" << std::endl;
	_type = ref._type;
	return (*this);
}

void	Animal::makeSound() const {
std::cout << "┴RV═ZT█RŇT▄KÍRF┌لمىPßrvÝz｡繝�ｼ繝ｫtűr§Ã¡„Ø§�̃�†rŘ§ŮvÃz¼kÃ¶rfÃºrÃ³gÃ©" << std::endl;
}

void	Animal::ideas() const {
std::cout << "[Muffled]" << std::endl;
}

std::string Animal::getType() const {
	return (_type);
}

Animal::~Animal() {
	std::cout << "Animal destructor called" << std::endl;
}