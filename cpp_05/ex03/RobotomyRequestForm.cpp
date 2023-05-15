/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-g <ralves-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 17:22:01 by ralves-g          #+#    #+#             */
/*   Updated: 2023/05/15 16:45:51 by ralves-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm(): AForm("RobotomyRequestForm", 72, 45, "") {}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const& ref): AForm(ref.getName(), ref.getGradeToSign(), ref.getGradeToExec(), ref.getTarget()) {(void)ref;}

RobotomyRequestForm::RobotomyRequestForm(std::string const& target): AForm("RobotomyRequestForm", 72, 45, target) {}

RobotomyRequestForm&	RobotomyRequestForm::operator=(RobotomyRequestForm const &ref) {
	setTarget(ref);
	return (*this);
}

void	RobotomyRequestForm::execute(Bureaucrat const& executor) const {
	isExecutable(executor);
	srand(time(NULL));
	if ((rand() % 2 == 1))
		std::cout << getTarget() << " was robotomized." << std::endl;
	else
		std::cout << "[Error] _ " << getTarget() << " failed to get robotomized." << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm() {}


