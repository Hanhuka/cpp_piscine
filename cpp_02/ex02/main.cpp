/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-g <ralves-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 16:06:24 by ralves-g          #+#    #+#             */
/*   Updated: 2023/03/21 12:19:04 by ralves-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) {
	
// Fixed a;
// Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

// std::cout << a << std::endl;
// std::cout << ++a << std::endl;
// std::cout << a << std::endl;
// std::cout << a++ << std::endl;
// std::cout << a << std::endl;
// std::cout << b << std::endl;

// std::cout << Fixed::max( a, b ) << std::endl;

Fixed c(Fixed(123.456f));
Fixed d(Fixed(123.455f));

std::cout << c << std::endl;
std::cout << d << std::endl;
d++;
std::cout << d << std::endl;

if (c == d)
	std::cout << "c == d ? [1]" << std::endl;
else
	std::cout << "c == d ? [0]"  << std::endl;
std::cout << "c == d ? [" << (c == d) << "]"  << std::endl;;


// std::cout << Fixed::max( a, b ) << std::endl;



return 0;
}
