/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-g <ralves-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 16:37:47 by ralves-g          #+#    #+#             */
/*   Updated: 2023/05/12 16:44:04 by ralves-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

PresidentialPardonForm::PresidentialPardonForm(): AForm("PresidentialPardonForm", 72, 45) {}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const& ref): AForm(ref.getName(), ref.getGradeToSign(), ref.getGradeToExec()) {(void)ref;}

PresidentialPardonForm::PresidentialPardonForm(std::string const& target): AForm("PresidentialPardonForm", 72, 45), _target(target) {}

PresidentialPardonForm&	PresidentialPardonForm::operator=(PresidentialPardonForm const &ref) {
	_target = ref._target;
	return (*this);
}

void	PresidentialPardonForm::execute(Bureaucrat const& executor) const {
	isExecutable(executor);
	std::cout << "Zaphod Beeblebrox pardoned " << _target << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm() {}


