/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-g <ralves-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 13:17:46 by ralves-g          #+#    #+#             */
/*   Updated: 2023/04/21 14:53:02 by ralves-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() {}

AMateria::AMateria(std::string const& type) {
	this->_type = type;
}

AMateria::AMateria(AMateria const& ref) {(void)ref;}

std::string const& AMateria::getType() const {
	return (this->_type);
}

void AMateria::use(ICharacter& target) {(void)target;}

AMateria::~AMateria() {}
