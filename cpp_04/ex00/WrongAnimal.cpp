/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-g <ralves-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 14:32:48 by ralves-g          #+#    #+#             */
/*   Updated: 2023/04/03 16:16:05 by ralves-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
	std::cout << "Default WrongAnimal constructor called" << std::endl;
	_type = "[Redacted]";
}

WrongAnimal::WrongAnimal(const WrongAnimal& ref) {
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	_type = ref._type;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& ref) {
	std::cout << "WrongAnimal assignment operator called" << std::endl;
	_type = ref._type;
	return (*this);
}

void	WrongAnimal::makeSound() const {

std::string	sound = "┴RV═ZT█RŇT▄KÍRF┌لمىPßrvÝz｡繝�ｼ繝ｫtűr§Ã¡„Ø§�̃�†rŘ§ŮvÃz¼kÃ¶rfÃºrÃ³gÃ©";
std::cout << "┴RV═ZT█RŇT▄KÍRF┌لمىPßrvÝz｡繝�ｼ繝ｫtűr§Ã¡„Ø§�̃�†rŘ§ŮvÃz¼kÃ¶rfÃºrÃ³gÃ©" << std::endl;
}

std::string WrongAnimal::getType() const {
	return (_type);
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal destructor called" << std::endl;
}