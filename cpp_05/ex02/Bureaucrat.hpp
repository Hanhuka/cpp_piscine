/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-g <ralves-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 15:31:54 by ralves-g          #+#    #+#             */
/*   Updated: 2023/05/12 16:11:52 by ralves-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <string>

class AForm;

class Bureaucrat {
	private:
		Bureaucrat();
	protected:
		std::string const	_name;
		int	_grade;
		Bureaucrat&	operator=(Bureaucrat const& ref);
	public:
		Bureaucrat(std::string const name, int grade);
		Bureaucrat(Bureaucrat const& ref);
		~Bureaucrat();
		std::string	getName() const;
		int	getGrade() const;
		void	incrementGrade();
		void	decrementGrade();
		void	signForm(AForm& toSign);
		void	executeForm(AForm const& form);
		class GradeTooHighException: public std::exception {
			public:
				virtual const char* what() const throw();
		};
		class GradeTooLowException: public std::exception {
			public:
				virtual const char* what() const throw();
		};
};

std::ostream& operator<<(std::ostream& os, Bureaucrat const& ref);

#endif