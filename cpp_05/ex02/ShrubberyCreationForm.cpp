/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-g <ralves-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 18:40:19 by ralves-g          #+#    #+#             */
/*   Updated: 2023/05/12 16:17:16 by ralves-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>
#include "Bureaucrat.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): AForm("ShrubberyCreationForm", 72, 45) {}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const& ref): AForm(ref.getName(), ref.getGradeToSign(), ref.getGradeToExec()) {(void)ref;}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const& target): AForm("ShrubberyCreationForm", 72, 45), _target(target) {}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=(ShrubberyCreationForm const &ref) {
	_target = ref._target;
	return (*this);
}

const char *ShrubberyCreationForm::OpenErrorException::what() const throw() {
	return ("couldn't open target file\n");
}

void	ShrubberyCreationForm::execute(Bureaucrat const& executor) const {
	isExecutable(executor);
	std::string shrubberyName = _target;
	shrubberyName.append("_shrubbery");
	std::ofstream shrubberyFile;
	shrubberyFile.open(shrubberyName.c_str(), std::ios::trunc);
	if (shrubberyFile.fail())
		throw OpenErrorException();
	shrubberyFile << 
	"\n"
	"              \e[0;92m█\n"
	"         \e[0;37m████\e[0;92m██\e[0;37m█                     ▓██\n"
	"       \e[0;37m█████\e[0;92m████\e[0;37m███                 ██▓██\n"
	"     \e[0;37m▓▓▓▓██\e[0;32m█\e[0;92m▓█\e[0;32m█\e[0;92m███\e[0;37m██       ██\n"
	"        \e[0;37m▓█\e[0;92m█\e[0;32m█\e[0;92m▓█\e[0;32m██\e[0;92m███\e[0;37m█         ███\n"
	"     \e[0;37m██   \e[0;92m██\e[0;32m█\e[0;92m████████\e[0;37m       ██████    ██      █\n"
	"  \e[0;37m███████\e[0;92m██████████████\e[0;37m █████▓██████ ██▓██████\n"
	"\e[0;37m▓███▓███\e[0;92m██\e[0;32m█\e[0;92m▓████████████\e[0;37m██▓███▓▓▓████████▓▓██\n"
	" \e[0;37m▓███▓▓\e[0;32m█\e[0;92m▓█\e[0;32m█\e[0;92m▓█████████████\e[0;37m▓▓▓███▓▓▓████\n"
	"   \e[0;37m▓███\e[0;32m█\e[0;92m▓███▓▓████████████\e[0;37m█▓▓██      ██\n"
	"      \e[0;92m██\e[0;32m█\e[0;92m▓██\e[0;32m█\e[0;92m██████████▓██\n"
	"    \e[0;92m██\e[0;32m█\e[0;92m▓█\e[0;32m████\e[0;92m▓█████████\e[0;32m█\e[0;92m▓███\n"
	"  \e[0;92m███\e[0;32m█\e[0;92m▓██████\e[0;32m█\e[0;92m▓▓████████▓▓████\n"
	" \e[0;92m███\e[0;32m██\e[0;92m▓█████████████████████████\n"
	" \e[0;32m█\e[0;92m███\e[0;32m███\e[0;92m▓██\e[0;32m█\e[0;92m▓█████\e[0;32m█\e[0;92m██████\e[0;32m██\e[0;92m▓█████\n"
	"\e[0;32m███\e[0;92m███\e[0;32m█\e[0;92m█████\e[0;32m███\e[0;92m▓███\e[0;32m██\e[0;92m▓████████████\n"
	"  \e[0;32m██\e[0;92m▓██\e[0;32m█\e[0;92m▓███████▓▓███\e[0;32m█\e[0;92m▓\e[0;32m█\e[0;92m▓▓██\e[0;32m██\e[0;92m▓█\n"
	"       \e[0;32m███\e[0;92m▓▓█\e[0;32m███\e[0;92m██\e[0;33m██   █▓\e[0;32m██\e[0;92m██\e[0;33m██\n"
	"             \e[0;33m▒█▓\e[0;32m██\e[0;33m███████▓██\n"
	"             \e[0;33m▒█▓█▓██\n"
	"             \e[0;33m▒██▓█▓█ \e[0;92m███████████\n"
	"             \e[0;33m▒▓█▓█\e[0;32m\e[0;92m▓█████▓▓████████████\n"
	"             \e[0;33m▒█▓\e[0;32m█\e[0;92m████▓▓███▓█████\e[0;32m█\e[0;92m████▓██\n"
	"             \e[0;33m▒\e[0;32m█\e[0;92m██\e[0;32m█\e[0;92m▓████\e[0;32m█\e[0;92m▓██\e[0;32m█\e[0;92m██\e[0;32m█\e[0;92m▓██\e[0;32m█\e[0;92m█████\n" << \
	"            \e[0;33m▒▓\e[0;32m█\e[0;92m▓▓█\e[0;32m█\e[0;92m▓▓████\e[0;32m██\e[0;92m█\e[0;32m█\e[0;92m▓█████\e[0;32m█\e[0;92m▓█████\n"
	"           \e[0;33m▒▓█\e[0;32m█\e[0;92m█▓▓█\e[0;32m██\e[0;92m▓▓▓████\e[0;32m█\e[0;92m▓▓█████\e[0;32m██\e[0;92m▓███\n" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}
