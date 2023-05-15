/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-g <ralves-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 12:33:33 by ralves-g          #+#    #+#             */
/*   Updated: 2023/05/15 16:11:52 by ralves-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
#include <string>

class AForm;

class Intern {
	private:
		std::string	_forms[3];
	public:
		Intern();
		Intern(Intern const& ref);
		Intern& operator=(Intern const & ref);
		~Intern();
		AForm *makeForm(std::string form, std::string target);
		class NotValidFormException: public std::exception {
				virtual const char* what() const throw();
		};
};

#endif