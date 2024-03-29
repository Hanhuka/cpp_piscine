/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-g <ralves-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 16:18:29 by ralves-g          #+#    #+#             */
/*   Updated: 2023/05/15 14:52:05 by ralves-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main() {
	Bureaucrat homie("The Bro", 6);
	RobotomyRequestForm robot("Not The Homie");
	ShrubberyCreationForm bush("someGreen");
	PresidentialPardonForm sorry("you");
	try
	{
		homie.signForm(bush);
		homie.signForm(sorry);
		homie.signForm(robot);
		homie.signForm(robot);
	}
	catch (std::exception& e)
	{
		e.what();
	}
	try
	{
		homie.executeForm(robot);
		homie.executeForm(bush);
		homie.executeForm(sorry);
	}
	catch (std::exception& e)
	{
		e.what();
	}
	homie.incrementGrade();
	try
	{
		homie.executeForm(sorry);
	}
	catch (std::exception& e)
	{
		e.what();
	}
}