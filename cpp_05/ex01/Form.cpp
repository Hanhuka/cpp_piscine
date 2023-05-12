/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-g <ralves-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 16:20:00 by ralves-g          #+#    #+#             */
/*   Updated: 2023/05/08 11:53:02 by ralves-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(std::string const& name, int const& gradeToSign, int const& gradeToExec): _name(name), _gradeToSign(gradeToSign), _gradeToExec(gradeToExec) {
	_signed = false;
}

Form::Form(Form const& ref): _name(ref._name), _gradeToSign(ref._gradeToSign), _gradeToExec(ref._gradeToExec) {
	_signed = false;
}

Form&	Form::operator=(Form const& ref) {
	(void)ref;
	return (*this);
}

void	Form::beSigned(Bureaucrat const& signer) {
	if (_signed)
		throw Form::AlreadySignedException();
	else if (signer.getGrade() > _gradeToSign)
		throw Form::GradeToLowException();
	else
		_signed = true;
}

const char*	Form::GradeToLowException::what(void) const throw() {
	std::cout << "Invalid grade!" << std::endl;
	return ("Grade too low!");
}

const char*	Form::AlreadySignedException::what(void) const throw() {
	return ("this form is already signed!");
}

const char* Form::NotSignedException::what() const _GLIBCXX_NOTHROW {
	return ("this form is not signed!");
}

std::string	Form::getName(void) const {
	return (_name);
}

int	Form::getGradeToSign() const {
	return (_gradeToSign);
}

int	Form::getGradeToExec() const {
	return (_gradeToExec);
}

void	Form::isExecutable(Bureaucrat const& executor) const {
	if (!_signed)
		throw NotSignedException();
	if (executor.getGrade() > _gradeToExec)
		throw GradeToLowException();
}

Form::~Form() {}