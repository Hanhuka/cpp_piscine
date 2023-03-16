/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-g <ralves-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 12:15:59 by ralves-g          #+#    #+#             */
/*   Updated: 2023/03/15 16:16:14 by ralves-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

class Point {
private:
	const Fixed _x;
	const Fixed _y;
	Point& operator=(const Point& copy);
public:
	Point();
	Point(const float x, const float y);
	Point(const Point& copy);
	const Fixed& getX()const;
	const Fixed& getY()const;
	bool operator==(const Point& compare);
	~Point();
};