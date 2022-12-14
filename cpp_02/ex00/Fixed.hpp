/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-g <ralves-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 15:01:08 by ralves-g          #+#    #+#             */
/*   Updated: 2022/12/29 15:16:33 by ralves-g         ###   ########.fr       */
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
	Fixed(const Fixed& copy);
	Fixed& operator=(const Fixed& copy);
	~Fixed();
	int getRawBits(void) const;
	void setRawBits(int const raw);
};

#endif