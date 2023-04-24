/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-g <ralves-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 14:09:05 by ralves-g          #+#    #+#             */
/*   Updated: 2023/04/24 16:04:01 by ralves-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(): AMateria("cure") {}

Cure::Cure(Cure const& ref): AMateria("ice") {(void)ref;}

Cure&	Cure::operator=(Cure const& ref) {
	(void)ref;
	return (*this);
}

AMateria* Cure::clone() const {
	return (new Cure());
}

void	Cure::use(ICharacter& target) {
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

Cure::~Cure() {}