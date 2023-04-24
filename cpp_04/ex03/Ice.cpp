/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-g <ralves-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 13:02:48 by ralves-g          #+#    #+#             */
/*   Updated: 2023/04/24 16:03:50 by ralves-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(): AMateria("ice") {}

Ice::Ice(Ice const& ref): AMateria("ice") {(void)ref;}

Ice&	Ice::operator=(Ice const& ref) {
	(void)ref;
	return (*this);
}

AMateria* Ice::clone() const {
	return (new Ice());
}

void	Ice::use(ICharacter& target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

Ice::~Ice() {}