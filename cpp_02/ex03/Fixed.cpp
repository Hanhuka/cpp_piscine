/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-g <ralves-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 15:15:40 by ralves-g          #+#    #+#             */
/*   Updated: 2023/03/15 16:41:36 by ralves-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() {
	_FPN = 0;
}

Fixed::Fixed(const int val) {
	_FPN = val << _FracBits;
}

Fixed::Fixed(const float val) {
	_FPN = (val * float(1 << _FracBits) + (val >= 0 ? 0.5 : -0.5));
}

Fixed::Fixed(const Fixed& copy){
	operator=(copy);
}

Fixed& Fixed::operator=(const Fixed& copy) {
	_FPN = copy.getRawBits();
	return *this;
}

bool Fixed::operator==(const Fixed& test) const {
	return (_FPN == test.getRawBits());
}

bool Fixed::operator>(const Fixed& test) const {
	return (_FPN > test.getRawBits());
}

bool Fixed::operator<(const Fixed& test) const {
	return (_FPN < test.getRawBits());
}

bool Fixed::operator>=(const Fixed& test) const {
	return (_FPN >= test.getRawBits());
}

bool Fixed::operator<=(const Fixed& test) const {
	return (_FPN <= test.getRawBits());
}

bool Fixed::operator!=(const Fixed& test) const {
	return (_FPN != test.getRawBits());
}

Fixed Fixed::operator+(const Fixed& test) const {
	Fixed val;
	val.setRawBits(this->_FPN + test.getRawBits());
	return (val);
}

Fixed Fixed::operator-(const Fixed& test) const {
	Fixed val;
	val.setRawBits(this->_FPN - test.getRawBits());
	return (val);
}

Fixed Fixed::operator*(const Fixed& test) const {
	Fixed val;
	val.setRawBits((_FPN * test.getRawBits()) >> _FracBits);
	return val;
	return val;
}

Fixed Fixed::operator/(const Fixed& test) const {
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
}

Fixed&	Fixed::min(Fixed& f1, Fixed& f2)
{
	return (f1 < f2 ? f1 : f2);
}

const Fixed&	min(const Fixed& f1, const Fixed& f2)
{
	return (f1 < f2 ? f1 : f2);
}

Fixed&	Fixed::max(Fixed& f1, Fixed& f2)
{
	return (f1 > f2 ? f1 : f2);
}

const Fixed&	Fixed::max(const Fixed& f1, const Fixed& f2)
{
	return (f1 > f2 ? f1 : f2);
}

int Fixed::getRawBits(void) const {
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
