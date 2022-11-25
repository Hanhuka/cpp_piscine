/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-g <ralves-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 14:35:30 by ralves-g          #+#    #+#             */
/*   Updated: 2022/11/25 18:14:54 by ralves-g         ###   ########.fr       */
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
	while (!parameter.length())
		std::getline(std::cin, parameter);
}

void Contact::setContact(void) {
	Contact::setParameter("< Type the first name of your contact >", fstName);
	Contact::setParameter("< Type the last name of your contact >", lstName);
	Contact::setParameter("< Type the nickname of your contact >", nickname);
	Contact::setParameter("< Type the phone number of your contact >", phoneNbr);
	Contact::setParameter("< Type your contact's darkest secret >", darkScret);
	cStatus = 1;
}
