/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-g <ralves-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 16:14:23 by ralves-g          #+#    #+#             */
/*   Updated: 2023/05/16 15:48:00 by ralves-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AForm_HPP
# define AForm_HPP

# include <iostream>
# include <string>

class	Bureaucrat;

class AForm {
	protected:
		void	setTarget(AForm const& ref);
	private:
		std::string const	_name;
		bool				_signed;
		int const			_gradeToSign;
		int const			_gradeToExec;
		std::string			_target;
		AForm();
		AForm&	operator=(AForm const& ref);
	public:
		AForm(std::string const& name, int const& gradeToSign, int const& gradeToExec, std::string target);
		AForm(AForm const& ref);
		std::string	getName() const;
		int	getGradeToSign() const;
		int	getGradeToExec() const;
		std::string	getTarget() const;
		void	beSigned(Bureaucrat const& signer);
		void	isExecutable(Bureaucrat const& executor) const;
		virtual void	execute(Bureaucrat const& executor) const = 0;
		class GradeToLowException: public std::exception {	
			virtual const char* what() const _GLIBCXX_NOTHROW;
		};
		class AlreadySignedException: public std::exception {	
			virtual const char* what() const _GLIBCXX_NOTHROW;
		};
		class NotSignedException: public std::exception {
			virtual const char* what() const _GLIBCXX_NOTHROW;
		};
		virtual ~AForm();
};

std::ostream& operator<<(std::ostream& os, AForm const& ref);

#endif