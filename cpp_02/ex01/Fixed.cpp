/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-g <ralves-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 15:15:40 by ralves-g          #+#    #+#             */
/*   Updated: 2022/12/29 16:23:51 by ralves-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() {
	std::cout << "Default constructor called" << std::endl;
	_FPN = 0;
}

Fixed::Fixed(const Fixed& copy){
	std::cout << "Copy constructor called" << std::endl;
	operator=(copy);
	// _FPN = copy.getRawBits();
}

Fixed& Fixed::operator=(const Fixed& copy) {
	std::cout << "Copy assignment operator called	" << std::endl;
	_FPN = copy.getRawBits();
	return *this;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return (_FPN);
}

void	Fixed::setRawBits(int const raw) {
	_FPN = raw;
}