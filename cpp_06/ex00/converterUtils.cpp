/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   converterUtils.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-g <ralves-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 17:32:04 by ralves-g          #+#    #+#             */
/*   Updated: 2023/05/29 18:04:44 by ralves-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include "converterUtils.hpp"
#include <limits>

int	valCount(std::string	toCheck, char toCount) {
	int counter = 0;
	for (int i = 0; toCheck[i]; i++)
		if (toCheck[i] == toCount)
			counter++;
	return (counter);
}

bool	getType(std::string toCheck) {
	bool	hasDigit = false;
	int		dotCount = valCount(toCheck, '.');
	int		fCount = valCount(toCheck, 'f');
	int		plus = valCount(toCheck, '+');
	int		minus = valCount(toCheck, '-');
	
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
			if (*toCheck.end() == 'f')
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
	int	val = atoi(toConvert.c_str());

	if (lmtChck > std::numeric_limits<int>::max() || lmtChck < std::numeric_limits<int>::min())
	{
		std::cerr << "Error: Int overflow" << std::endl;
		return ;
	}
	if (val > std::numeric_limits<int>::max())
	if (val < 0 || val > 127)
		std::cout << "char: impossible\n";
	else if (isprint(val))
		std::cout << "char: '" << val << "'\n";
	else
		std::cout << "char: Non displayable\n";
	std::cout << "int: " << val << "\n";
	std::cout << "float: " << static_cast<float>(val) << "f\n";
	std::cout << "double: " << static_cast<double>(val) << "\n";
}


void	castFlt(std::string toConvert) {
	float	val = atof(toConvert.c_str());
	
}
