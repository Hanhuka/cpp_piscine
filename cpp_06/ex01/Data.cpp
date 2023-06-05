/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-g <ralves-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 17:50:04 by ralves-g          #+#    #+#             */
/*   Updated: 2023/06/01 15:18:49 by ralves-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"
#include "iostream"

Data::Data(): DataInt(0) {}

Data::Data(Data const& ref) {
	*this = ref;
}

Data::Data(int const& dataVal): DataInt(dataVal) {}

Data&	Data::operator=(Data const& ref) {
	this->DataInt = ref.DataInt;
	return (*this);
}

void	Data::printData(void) {
	std::cout << "data value = " << DataInt << std::endl;
}

Data::~Data() {}