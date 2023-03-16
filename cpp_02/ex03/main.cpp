/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-g <ralves-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 12:24:32 by ralves-g          #+#    #+#             */
/*   Updated: 2023/03/16 14:31:56 by ralves-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Point.hpp"

bool	checkEachLine(Point& r1, Point& r2, Point& t, Point& p) {
	Fixed	m;
	Fixed	b;

	if (r1.getX() - r2.getX() == 0)
	{
		if ((t.getX() > r1.getX() && p.getX() > r1.getX()) || (t.getX() < r1.getX() && p.getX() < r1.getX()))
			return (true);
		return (false);
	}
	m = (r1.getY() - r2.getY())/(r1.getX() - r2.getY());
	b = r1.getY() - r1.getX() * m;
	if ((t.getY() > m * t.getX() + b && p.getY() > m * p.getX() + b) || (t.getY() < m * t.getX() + b && p.getY() < m * p.getX() + b))
		return (true);
	return (false);
}

bool	bsp( Point& a, Point& b, Point& c, Point& p) {

	if (!checkEachLine(a, b, c, p) || !checkEachLine(b, c, a, p) || !checkEachLine(c, a, b, p))
		return (false);
	return (true);
}

int main()
{
	Point a(2, 2);
	Point b(4, 4);
	Point c(4, 2);
	Point p(4, 4);
	
	std::cout << (bsp(a, b, c, p) ? "True" : "False") << std::endl;
}
