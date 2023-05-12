/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-g <ralves-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 16:58:35 by ralves-g          #+#    #+#             */
/*   Updated: 2023/05/12 17:10:31 by ralves-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"
# include "Form.hpp"

int main() {
	Bureaucrat hey("someDude", 50);

	Form form1("justAForm", 70, 50);
	Form form2("yetAnother", 60, 40);
	Form form3("aMoreRigurousForm", 20, 20);

	try
	{
		hey.signForm(form1);
		hey.signForm(form2);
		hey.signForm(form3);
	}
	catch (std::exception& e)
	{
		e.what();
	}
}