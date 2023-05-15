/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-g <ralves-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 16:20:00 by ralves-g          #+#    #+#             */
/*   Updated: 2023/05/15 16:45:02 by ralves-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm(std::string const& name, int const& gradeToSign, int const& gradeToExec, std::string target): _name(name), _gradeToSign(gradeToSign), _gradeToExec(gradeToExec), _target(target) {
	_signed = false;
}

AForm::AForm(AForm const& ref): _name(ref._name), _gradeToSign(ref._gradeToSign), _gradeToExec(ref._gradeToExec), _target(ref._target) {
	_signed = false;
}

AForm&	AForm::operator=(AForm const& ref) {
	_target = ref._target;
	_signed = ref._signed;
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

std::string AForm::getTarget() const {
	return (_target);
}

void	AForm::setTarget(AForm const& ref) {
	_target = ref._target;
}

void	AForm::isExecutable(Bureaucrat const& executor) const {
	if (!_signed)
		throw NotSignedException();
	if (executor.getGrade() > _gradeToExec)
		throw GradeToLowException();
}

AForm::~AForm() {}