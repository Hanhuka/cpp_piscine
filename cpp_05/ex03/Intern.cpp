/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-g <ralves-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 12:33:02 by ralves-g          #+#    #+#             */
/*   Updated: 2023/05/15 16:52:09 by ralves-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern() {
	_forms[0] = "RobotomyRequestForm";
	_forms[1] = "ShrubberyCreationForm";
	_forms[2] = "PresidentialPardonForm";
}

Intern::Intern(Intern const& ref) {
	(void)ref;
}

Intern& Intern::operator=(Intern const& ref) {
	(void)ref;
	return (*this);
}

AForm	*Intern::makeForm(std::string form, std::string target) {
	int i = 0;

	while (i <= 3)
	{
		if (i == 3)
			break;
		if (form == _forms[i])
			break;
		i++;
	}
	switch (i)
	{
		case 0:
			return (new RobotomyRequestForm(target));
		case 1:
			return (new ShrubberyCreationForm(target));
		case 2:
			return (new PresidentialPardonForm(target));
		default:
			throw NotValidFormException();
	}
}

const char*	Intern::NotValidFormException::what() const throw() {
	std::cout << "Error: Couldn't create a form" << std::endl;
	return ("there isn't a matching form!");
}

Intern::~Intern() {}
