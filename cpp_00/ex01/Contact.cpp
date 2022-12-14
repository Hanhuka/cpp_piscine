/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-g <ralves-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 14:35:30 by ralves-g          #+#    #+#             */
/*   Updated: 2022/12/05 15:58:08 by ralves-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

Contact::Contact(void) {
	std::cout << "Constructor called" << std::endl;
	cStatus = 0;
	return ;
}

Contact::~Contact(void) {
	std::cout << "Destructor called" << std::endl;
	return ;
}

int	Contact::status(void)
{
	return (cStatus);
}

std::string Contact::getParameter(int opt) {
	if (opt == 1)
		return (fstName);
	if (opt == 2)
		return (lstName);
	if (opt == 3)
		return (nickname);
	if (opt == 4)
		return (phoneNbr);
	if (opt == 5)
		return (darkScret);
	return ("not an option");
}

void Contact::setParameter(std::string const&str, std::string &parameter) {
	std::cout << str << std::endl;
	std::getline(std::cin, parameter);
	if (!std::cin)
		return ;
	while (!parameter.length())
		std::getline(std::cin, parameter);
}

void Contact::setContact(void) {
	Contact::setParameter("\e[1;33m< Type the \e[0mfirst name \e[1;33mof your contact >\e[0m", fstName);
	Contact::setParameter("\e[1;33m< Type the \e[0mlast name\e[1;33m of your contact >\e[0m", lstName);
	Contact::setParameter("\e[1;33m< Type the \e[0mnickname \e[1;33mof your contact >\e[0m", nickname);
	Contact::setParameter("\e[1;33m< Type the \e[0mphone number \e[1;33mof your contact >\e[0m", phoneNbr);
	Contact::setParameter("\e[1;33m< Type your contact's \e[0mdarkest secret \e[1;33m>\e[0m", darkScret);
	cStatus = 1;
}
