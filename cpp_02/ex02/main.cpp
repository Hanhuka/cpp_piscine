/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-g <ralves-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 16:06:24 by ralves-g          #+#    #+#             */
/*   Updated: 2023/03/13 14:30:00 by ralves-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) {
	
Fixed a;
Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

std::cout << a << std::endl;
std::cout << ++a << std::endl;
std::cout << a << std::endl;
std::cout << a++ << std::endl;
std::cout << a << std::endl;

std::cout << b << std::endl;

std::cout << Fixed::max( a, b ) << std::endl;

Fixed c(Fixed(123.456f));
Fixed d(Fixed(123.456f));
if (c == d)
	std::cout << "c == d ? [1]\n";
else
	std::cout << "c == d ? [0]\n";

// std::cout << "c == d ? [" << c == d << "]\n";


// std::cout << Fixed::max( a, b ) << std::endl;



return 0;
}