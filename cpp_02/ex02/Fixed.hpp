/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-g <ralves-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 15:01:08 by ralves-g          #+#    #+#             */
/*   Updated: 2023/01/03 18:07:30 by ralves-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed {
private:
	int	_FPN;
	static const int _FracBits = 8;
public:
	Fixed();
	Fixed(const int val);
	Fixed(const float val);
	Fixed(const Fixed& copy);
	Fixed& operator=(const Fixed& copy);
	bool operator==(const Fixed& test);
	bool operator>(const Fixed& test);
	bool operator<(const Fixed& test);
	bool operator>=(const Fixed& test);
	bool operator<=(const Fixed& test);
	bool operator!=(const Fixed& test);
	~Fixed();
	int getRawBits(void) const;
	void setRawBits(int const raw);
	float toFloat(void) const;
	int toInt(void) const;
};

std::ostream& operator<<(std::ostream& os, const Fixed& copy);
#endif