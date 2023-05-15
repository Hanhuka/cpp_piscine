/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-g <ralves-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 17:19:10 by ralves-g          #+#    #+#             */
/*   Updated: 2023/05/15 17:27:37 by ralves-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALAR_CONVERTER_HPP
# define SCALAR_CONVERTER_HPP

#include <string>

class ScalarConverter {
	private:
	public:
		ScalarConverter();
		ScalarConverter(ScalarConverter const& ref);
		ScalarConverter&	operator=(ScalarConverter const& ref);
		void	converter(std::string const& toConvert);
		~ScalarConverter();
}

#endif