/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-g <ralves-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 17:07:50 by ralves-g          #+#    #+#             */
/*   Updated: 2023/05/08 12:08:31 by ralves-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMY_REQUEST_FORM_HPP
# define ROBOTOMY_REQUEST_FORM_HPP

#include "AForm.hpp"
#include <string>

class RobotomyRequestForm: public AForm {
	private:
		RobotomyRequestForm();
		std::string	_target;
	public:
		RobotomyRequestForm&	operator=(RobotomyRequestForm const& ref);
		RobotomyRequestForm(RobotomyRequestForm const& ref);
		RobotomyRequestForm(std::string const& target);
		virtual void	execute(Bureaucrat const& executor) const;
		~RobotomyRequestForm();
};

#endif