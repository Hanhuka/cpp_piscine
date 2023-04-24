/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-g <ralves-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 15:34:17 by ralves-g          #+#    #+#             */
/*   Updated: 2023/04/03 16:13:54 by ralves-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() {
std::cout << "WrongCat default constructor called" << std::endl;
_type = "WrongCat";
WrongAnimal::_type = "wrongCat";
}

WrongCat::WrongCat(const WrongCat& ref) {
std::cout << "WrongCat copy constructor called" << std::endl;
_type = ref._type;
WrongAnimal::_type = ref.WrongAnimal::_type;
}

WrongCat&	WrongCat::operator=(const WrongCat& ref) {
std::cout << "WrongCat copy constructor called" << std::endl;
_type = ref._type;
WrongAnimal::_type = ref.WrongAnimal::_type;
return (*this);
}

void	WrongCat::makeSound() const {
	std::cout << "Meoooooow!" << std::endl;
}

std::string WrongCat::getType() const {
	return (_type);
}

WrongCat::~WrongCat() {
std::cout << "WrongCat destructor called" << std::endl;
}