/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-g <ralves-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 16:35:49 by ralves-g          #+#    #+#             */
/*   Updated: 2023/05/16 14:43:26 by ralves-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIAL_PARDON_FORM_HPP
# define PRESIDENTIAL_PARDON_FORM_HPP

#include "AForm.hpp"
#include <string>

class PresidentialPardonForm: public AForm {
	private:
		PresidentialPardonForm();
	public:
		PresidentialPardonForm&	operator=(PresidentialPardonForm const& ref);
		PresidentialPardonForm(PresidentialPardonForm const& ref);
		PresidentialPardonForm(std::string const& target);
		virtual void	execute(Bureaucrat const& executor) const;
		~PresidentialPardonForm();
};


#endif