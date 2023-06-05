/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   converterUtils.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-g <ralves-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 17:32:04 by ralves-g          #+#    #+#             */
/*   Updated: 2023/06/05 14:55:01 by ralves-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include "converterUtils.hpp"
#include <limits>
#include <iomanip>

int	valCount(std::string	toCheck, char toCount) {
	int counter = 0;
	for (int i = 0; toCheck[i]; i++)
		if (toCheck[i] == toCount)
			counter++;
	return (counter);
}

int	getType(std::string toCheck) {
	bool	hasDigit = false;
	int		dotCount = valCount(toCheck, '.');
	int		fCount = valCount(toCheck, 'f');
	int		plus = valCount(toCheck, '+');
	int		minus = valCount(toCheck, '-');

	std::cout << std::fixed << std::setprecision(1);
	if (toCheck.size() < 1)
		return (T_UNKNN);
	if (toCheck == "-inf" || toCheck == "+inf" || toCheck == "nan")
		return (T_DBL);
	else if (toCheck == "-inff" || toCheck == "+inff" || toCheck == "nanf")
		return (T_FLT);
	if (toCheck.size() == 1 && !isdigit(toCheck[0]))
		return (T_CHR);
	for (int i = 0; toCheck[i]; i++)
	{
		if ((toCheck[i] >= '0' && toCheck[i] <= '9'))
			hasDigit = true;
		if ((toCheck[i] < '0' || toCheck[i] > '9') && toCheck[i] != '.' && toCheck[i] != 'f' && toCheck[i] != '-' && toCheck[i] != '+')
			return (T_UNKNN);
	}
	if ((plus > 1 && minus > 1) || (plus && minus) || ((plus || minus) && toCheck[0] != '+' && toCheck[0] != '-'))
		return (T_UNKNN);
	if (hasDigit && dotCount <= 1 && fCount <= 1)
	{
		if (dotCount)
		{
			if (*(toCheck.end() - 1) == 'f')
				return (T_FLT);
			return (T_DBL);
		}
		if (!dotCount && !fCount)
			return (T_INT);
	}
	return (T_UNKNN);
}

void	castChr(std::string toConvert) {
	char val = (toConvert.c_str())[0];
	if (!isprint(val))
		std::cout << "char: Non displayable'" << val << "'\n";
	else
		std::cout << "char: '" << val << "'\n";
	std::cout << "int: " << static_cast<int>(val) << "\n";
	std::cout << "float: " << static_cast<float>(val) << "f\n";
	std::cout << "double: " << static_cast<double>(val) << "\n";
}

void	castInt(std::string toConvert) {
	int	lmtChck = atol(toConvert.c_str());

	if (lmtChck > std::numeric_limits<int>::max() || lmtChck < std::numeric_limits<int>::min())
	{
		std::cerr << "Error: Int overflow" << std::endl;
		return ;
	}
	int	val = atoi(toConvert.c_str());
	if (val < 0 || val > 127)
		std::cout << "char: impossible\n";
	else if (isprint(val))
		std::cout << "char: '" << static_cast<char>(val) << "'\n";
	else
		std::cout << "char: Non displayable\n";
	std::cout << "int: " << val << "\n";
	std::cout << "float: " << static_cast<float>(val) << "f\n";
	std::cout << "double: " << static_cast<double>(val) << "\n";
}


void	castFlt(std::string toConvert) {
	double	lmtChck = atof(toConvert.c_str());

	if (toConvert == "nanf" || toConvert == "-inff" || toConvert == "+inff")
	{
		std::cout << "int: impossible\nchar: impossible\nfloat: " << toConvert << "\ndouble: " << toConvert.substr(0, toConvert.size() - 1) << std::endl;
		return ;
	}
	if (lmtChck > std::numeric_limits<float>::max() || lmtChck < std::numeric_limits<float>::max() * -1)
	{
		std::cerr << "Error: Float overflow" << std::endl;
		return ;
	}	
	float	val = atof(toConvert.c_str());
	if (val < 0 || val > 127)
		std::cout << "char: impossible\n";
	else if (isprint(val))
		std::cout << "char: '" << static_cast<char>(val) << "'\n";
	else
		std::cout << "char: Non displayable\n";
	if (lmtChck > std::numeric_limits<int>::max() || lmtChck < std::numeric_limits<int>::min())
		std::cout << "int: impossible\n";
	else
		std::cout << "int: " << static_cast<int>(val) << "\n";
	std::cout << "float: " << val << "f\n";
	std::cout << "double: " << static_cast<double>(val) << "\n";
}

void	castDbl(std::string toConvert) {

	if (toConvert == "nan" || toConvert == "-inf" || toConvert == "+inf")
	{
		std::cout << "int: impossible\nchar: impossible\nfloat: " << toConvert << "f\ndouble: " << toConvert << std::endl;
		return ;
	}
	double	val = atof(toConvert.c_str());
	if (val < 0 || val > 127)
		std::cout << "char: impossible\n";
	else if (isprint(val))
		std::cout << "char: '" << static_cast<char>(val) << "'\n";
	else
		std::cout << "char: Non displayable\n";
	if (val > std::numeric_limits<int>::max() || val < std::numeric_limits<int>::min())
		std::cout << "int: impossible\n";
	else
		std::cout << "int: " << static_cast<int>(val) << "\n";
	if (val > std::numeric_limits<float>::max() || val < std::numeric_limits<float>::max() * -1)
		std::cout << "float: Impossible\n";
	else
		std::cout << "float: " << static_cast<float>(val) << "f\n";
	std::cout << "double: " << val << "\n";
}

void	unknn(void) {
	std::cerr << "Error: Coudln't convert string because it does not match any available type" << std::endl;
}
