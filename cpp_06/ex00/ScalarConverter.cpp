/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-g <ralves-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 17:19:14 by ralves-g          #+#    #+#             */
/*   Updated: 2023/05/31 14:30:25 by ralves-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "converterUtils.hpp"
#include "ScalarConverter.hpp"
#include <iostream>

ScalarConverter::ScalarConverter() {}

ScalarConverter::ScalarConverter(ScalarConverter const& ref) {
	(void)ref;
}

ScalarConverter&	ScalarConverter::operator=(ScalarConverter const& ref) {
	(void)ref;
	return (*this);
}

void	ScalarConverter::converter(std::string const& toConvert) {
	int type = getType(toConvert);

	switch (type) 
	{
		case 0:
			castChr(toConvert);
			break ;
		case 1: //int
			castInt(toConvert);
			break ;
		case 2:
			castFlt(toConvert);
			break ;
		case 3: //double
			castDbl(toConvert);
			break ;
		// case 4:
		// default :
		// 	castUnknn(toConvert);
	}
}

