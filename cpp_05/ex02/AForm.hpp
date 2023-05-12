/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-g <ralves-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 16:14:23 by ralves-g          #+#    #+#             */
/*   Updated: 2023/05/08 10:59:51 by ralves-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AForm_HPP
# define AForm_HPP

# include <iostream>
# include <string>

class	Bureaucrat;

class AForm {
	private:
		std::string const	_name;
		bool				_signed;
		int const			_gradeToSign;
		int const			_gradeToExec;
		AForm();
		AForm&	operator=(AForm const& ref);
	public:
		AForm(std::string const& name, int const& gradeToSign, int const& gradeToExec);
		AForm(AForm const& ref);
		std::string	getName() const;
		int	getGradeToSign() const;
		int	getGradeToExec() const;
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
		~AForm();
};

#endif