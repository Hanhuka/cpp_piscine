/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-g <ralves-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 14:32:48 by ralves-g          #+#    #+#             */
/*   Updated: 2023/04/17 16:11:30 by ralves-g         ###   ########.fr       */
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

Animal::~Animal() {
	std::cout << "Animal destructor called" << std::endl;
}