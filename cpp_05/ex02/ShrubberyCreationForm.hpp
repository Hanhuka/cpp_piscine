/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-g <ralves-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 18:40:16 by ralves-g          #+#    #+#             */
/*   Updated: 2023/05/12 16:12:10 by ralves-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERY_CREATION_FORM_HPP
# define SHRUBBERY_CREATION_FORM_HPP

#include "AForm.hpp"
#include <string>

class ShrubberyCreationForm: public AForm {
	private:
		ShrubberyCreationForm();
		std::string	_target;
	public:
		ShrubberyCreationForm&	operator=(ShrubberyCreationForm const& ref);
		ShrubberyCreationForm(ShrubberyCreationForm const& ref);
		ShrubberyCreationForm(std::string const& target);
		virtual void	execute(Bureaucrat const& executor) const;
		class OpenErrorException: public std::exception {
			public:
				virtual const char	*what() const throw();
		};
		~ShrubberyCreationForm();
};

#endif