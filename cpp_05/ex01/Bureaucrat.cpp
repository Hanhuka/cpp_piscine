/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-g <ralves-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 15:31:58 by ralves-g          #+#    #+#             */
/*   Updated: 2023/05/12 17:04:57 by ralves-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade): _name(name) {
	if (grade < 1 || grade > 150)
	{
		if (grade < 1)
			throw Bureaucrat::GradeTooHighException();
		else
			throw Bureaucrat::GradeTooLowException();
	}
	_grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const& ref): _name(ref._name) {
	*this = ref;
}

Bureaucrat&	Bureaucrat::operator=(Bureaucrat const& ref) {
	_grade = ref._grade;
	return (*this);
};

std::string	Bureaucrat::getName() const {
	return (_name);
}

int Bureaucrat::getGrade() const {
	return (_grade);
}

void	Bureaucrat::incrementGrade() {
	if (_grade - 1 < 1)
		throw Bureaucrat::GradeTooHighException();
	_grade--;
}
void	Bureaucrat::decrementGrade() {
	if (_grade + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	_grade++;
}

const char*	Bureaucrat::GradeTooHighException::what(void) const throw() {
	std::cout << "Grade too high!" << std::endl;
	return ("Invalid grade!");
}

const char*	Bureaucrat::GradeTooLowException::what(void) const throw() {
	std::cout << "Grade too low!" << std::endl;
	return ("Invalid grade!");
}

void	Bureaucrat::signForm(Form& toSign) {
	try 
	{
		toSign.beSigned(*this);
		std::cout << _name << " signed " << toSign.getName() << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << _name << " couldn't sign " << toSign.getName() << " because ";
		std::cout << e.what() << std::endl;
	}
	
}

Bureaucrat::~Bureaucrat() {}

std::ostream& operator<<(std::ostream& os, Bureaucrat const& ref) {
	std::cout << "Hi, I'm " << ref.getName() << " and my grade is " << ref.getGrade() << std::endl;
	return (os);
}