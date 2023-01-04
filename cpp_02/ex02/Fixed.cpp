/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-g <ralves-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 15:15:40 by ralves-g          #+#    #+#             */
/*   Updated: 2023/01/04 17:55:29 by ralves-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() {
	std::cout << "Default constructor called" << std::endl;
	_FPN = 0;
}

Fixed::Fixed(const int val) {
	_FPN = val << _FracBits;
}

Fixed::Fixed(const float val) {
	_FPN = (val * float(1 << _FracBits) + (val >= 0 ? 0.5 : -0.5));
}

Fixed::Fixed(const Fixed& copy){
	std::cout << "Copy constructor called" << std::endl;
	operator=(copy);
}

Fixed& Fixed::operator=(const Fixed& copy) {
	std::cout << "Copy assignment operator called	" << std::endl;
	_FPN = copy.getRawBits();
	return *this;
}

bool Fixed::operator==(const Fixed& test) {
	return (_FPN == test.getRawBits());
}

bool Fixed::operator>(const Fixed& test) {
	return (_FPN > test.getRawBits());
}

bool Fixed::operator<(const Fixed& test) {
	return (_FPN < test.getRawBits());
}

bool Fixed::operator>=(const Fixed& test) {
	return (_FPN >= test.getRawBits());
}

bool Fixed::operator<=(const Fixed& test) {
	return (_FPN <= test.getRawBits());
}

bool Fixed::operator!=(const Fixed& test) {
	return (_FPN != test.getRawBits());
}

Fixed Fixed::operator+(const Fixed& test) {
	Fixed val;
	val.setRawBits(this->_FPN + test.getRawBits());
	return (val);
}

Fixed Fixed::operator-(const Fixed& test) {
	Fixed val;
	val.setRawBits(this->_FPN - test.getRawBits());
	return (val);
}

Fixed Fixed::operator*(const Fixed& test) {
	Fixed val;
	val.setRawBits((_FPN * test.getRawBits()) >> _FracBits);
	return val;
	return val;
}

Fixed Fixed::operator/(const Fixed& test) {
	Fixed val;
	val.setRawBits((_FPN << _FracBits) / test.getRawBits());
	return val;
}

Fixed& Fixed::operator++(void) {
	this->_FPN++;
	return *this;
}

Fixed& Fixed::operator--(void) {
	this->_FPN--;
	return *this;
}

Fixed Fixed::operator++(int after) {
	(void)after;
	Fixed holder = Fixed(*this);
	_FPN++;
	return holder;
}

Fixed Fixed::operator--(int after) {
	(void)after;
	Fixed holder = Fixed(*this);
	_FPN--;
	return holder;
}

std::ostream& operator<<(std::ostream& os, const Fixed& copy) {
	return (os << copy.toFloat());
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

float Fixed::toFloat(void) const {
	return (float(_FPN) / float(1 << _FracBits));
}

int Fixed::toInt(void) const {
	return (int (_FPN) / int (1 << _FracBits));
}
