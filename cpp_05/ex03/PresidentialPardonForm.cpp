/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-g <ralves-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 16:37:47 by ralves-g          #+#    #+#             */
/*   Updated: 2023/05/15 16:45:57 by ralves-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

PresidentialPardonForm::PresidentialPardonForm(): AForm("PresidentialPardonForm", 25, 5, "") {}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const& ref): AForm(ref.getName(), ref.getGradeToSign(), ref.getGradeToExec(), ref.getTarget()) {(void)ref;}

PresidentialPardonForm::PresidentialPardonForm(std::string const& target): AForm("PresidentialPardonForm", 25, 5, target) {}

PresidentialPardonForm&	PresidentialPardonForm::operator=(PresidentialPardonForm const &ref) {
	setTarget(ref);
	return (*this);
}

void	PresidentialPardonForm::execute(Bureaucrat const& executor) const {
	isExecutable(executor);
	std::cout << "Zaphod Beeblebrox pardoned " << getTarget() << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm() {}


