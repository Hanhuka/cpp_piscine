/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-g <ralves-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 16:18:29 by ralves-g          #+#    #+#             */
/*   Updated: 2023/05/15 17:01:36 by ralves-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int	main() {
	Bureaucrat homie("The Bro", 6);
	Intern unlucky = Intern();
	AForm *forms[4];

	std::cout << "\n[CREATING FORMS TEST]\n" << std::endl;
	try
	{
		forms[0] = unlucky.makeForm("RobotomyRequestForm", "Not The Homie");
		forms[1] = unlucky.makeForm("ShrubberyCreationForm", "someGreen");
		forms[2] = unlucky.makeForm("PresidentialPardonForm", "you");
		forms[3] = unlucky.makeForm("NonExistentForm", "Who knows");
	}
	catch (std::exception& e)
	{
		e.what();
	}

	std::cout << "\n[SIGNING FORMS TEST]\n" << std::endl;
	try
	{
		homie.signForm(*forms[1]);
		homie.signForm(*forms[2]);
		homie.signForm(*forms[0]);
		homie.signForm(*forms[0]);
	}
	catch (std::exception& e)
	{
		e.what();
	}
	
	std::cout << "\n[EXECUTING FORMS TEST]\n" << std::endl;
	try
	{
		homie.executeForm(*forms[0]);
		homie.executeForm(*forms[1]);
		homie.executeForm(*forms[2]);
	}
	catch (std::exception& e)
	{
		e.what();
	}
	homie.incrementGrade();
	try
	{
		homie.executeForm(*forms[2]);
	}
	catch (std::exception& e)
	{
		e.what();
	}
	for (int i = 0; i < 3; i++)
		delete forms[i];
}