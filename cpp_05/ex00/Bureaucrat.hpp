/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-g <ralves-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 15:31:54 by ralves-g          #+#    #+#             */
/*   Updated: 2023/05/02 17:12:21 by ralves-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>

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
		std::string	getName() const;
		int	getGrade() const;
		void	incrementGrade();
		void	decrementGrade();
		class GradeTooHighException: public std::exception {
		public:
			virtual const char* what() const throw();
		};
		class GradeTooLowException: public std::exception {
		public:
			virtual const char* what() const throw();
		};
};

#endif