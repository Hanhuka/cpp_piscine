/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ConverterUtlis.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-g <ralves-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 17:32:04 by ralves-g          #+#    #+#             */
/*   Updated: 2023/05/15 18:08:42 by ralves-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <iostream>
#include <string>

bool	isInt(std::string toCheck) {
	for (int i = 0; toCheck[i]; i++)
		if (toCheck[i] < '0' || toCheck[i] > '9')
			return (false);
	return (true);
}

int	valCount(std::string	toCheck, char toCount) {
	int counter = 0;
	for (int i = 0; toCheck[i]; i++)
		if (toCheck[i] == toCount)
			counter++;
	return (counter);
}

bool	isDouble(std::string toCheck) {
	bool	hasDigit = false;
	for (int i = 0; toCheck[i]; i++)
	{
		if ((toCheck[i] >= '0' && toCheck[i] <= '9'))
			hasDigit = true;
		if ((toCheck[i] < '0' || toCheck[i] > '9') && toCheck[i] != '.' )
			return (false);
	}
	if (hasDigit && valCount(toCheck, '.') == 1)
		return (true);
	return (false);
}

bool	ifFloat(std::string toCheck) {
	bool	hasDigit = false;
	int		dotCount = 0;
	int		fCount = 0;
	if (toCheck.back() != 'f')
		return (false);
	for (int i = 0; toCheck[i]; i++)
	{
		if ((toCheck[i] >= '0' && toCheck[i] <= '9'))
			hasDigit = true;
		if (toCheck[i] == '.')
			dotCount++;
		if ((toCheck[i] < '0' || toCheck[i] > '9') && toCheck[i] != '.' )
			return (0);
	}
	if (hasDigit && valCount(toCheck, '.') == 1 && valCount(toCheck, 'f') == 1)
		return (true);
	return (false);
}

int	identifyType(std::string toIdentify) {
	if (isInt(toIdentify))
		return (0);
	else if (isDouble(toIdentify))
		return (1);
	else if (isFloat(toIdentify))
		return (2);
	else if (is)
	
}