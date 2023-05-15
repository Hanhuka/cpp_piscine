/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-g <ralves-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 17:19:14 by ralves-g          #+#    #+#             */
/*   Updated: 2023/05/15 17:28:01 by ralves-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {}

ScalarConverter::ScalarConverter(ScalarConverter const& ref) {
	(void)ref;
}

ScalarConverter&	ScalarConverter::operator=(ScalarConverter const& ref) {
	(void)ref;
	return (*this);
}

void	converter(std::string const& toConvert) {
	
}

