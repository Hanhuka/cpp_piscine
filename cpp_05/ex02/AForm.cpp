/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-g <ralves-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 16:20:00 by ralves-g          #+#    #+#             */
/*   Updated: 2023/05/08 11:53:02 by ralves-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm(std::string const& name, int const& gradeToSign, int const& gradeToExec): _name(name), _gradeToSign(gradeToSign), _gradeToExec(gradeToExec) {
	_signed = false;
}

AForm::AForm(AForm const& ref): _name(ref._name), _gradeToSign(ref._gradeToSign), _gradeToExec(ref._gradeToExec) {
	_signed = false;
}

AForm&	AForm::operator=(AForm const& ref) {
	(void)ref;
	return (*this);
}

void	AForm::beSigned(Bureaucrat const& signer) {
	if (_signed)
		throw AForm::AlreadySignedException();
	else if (signer.getGrade() > _gradeToSign)
		throw AForm::GradeToLowException();
	else
		_signed = true;
}

const char*	AForm::GradeToLowException::what(void) const throw() {
	std::cout << "Invalid grade!" << std::endl;
	return ("Grade too low!");
}

const char*	AForm::AlreadySignedException::what(void) const throw() {
	return ("this form is already signed!");
}

const char* AForm::NotSignedException::what() const _GLIBCXX_NOTHROW {
	return ("this form is not signed!");
}

std::string	AForm::getName(void) const {
	return (_name);
}

int	AForm::getGradeToSign() const {
	return (_gradeToSign);
}

int	AForm::getGradeToExec() const {
	return (_gradeToExec);
}

void	AForm::isExecutable(Bureaucrat const& executor) const {
	if (!_signed)
		throw NotSignedException();
	if (executor.getGrade() > _gradeToExec)
		throw GradeToLowException();
}

AForm::~AForm() {}