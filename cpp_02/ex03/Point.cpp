/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-g <ralves-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 12:15:54 by ralves-g          #+#    #+#             */
/*   Updated: 2023/03/15 16:18:02 by ralves-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(): _x(0), _y(0) {}

Point::Point(const float x, const float y): _x(x), _y(y) {}

Point::Point(const Point& toCopy) {
	*this = toCopy;
}

Point& Point::operator=(const Point& toCopy) {
	(void)toCopy;
	return (*this);
}

bool Point::operator==(const Point& compare) {
	return (_x == compare.getX() && _y == compare.getY());
}

const Fixed& Point::getX() const {
return this->_x;
}

const Fixed& Point::getY() const {
return this->_y;
}

Point::~Point() {
}