/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-g <ralves-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 17:35:01 by ralves-g          #+#    #+#             */
/*   Updated: 2023/07/19 18:17:44 by ralves-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

bool	checkLine(std::string line) {
	for (int i = 0; line[i]; i++)
	{
		if (!(i % 2) && line[i] < '0' && line[i] > '9' && line[i] != '+'
			&& line[i] != '-' && line[i] != '*' && line[i] != '/')
		{
			return false;
		}
		else if (i % 2 && line[i] != ' ')
		{
			return false;
		}
	}
	return true;
}

int		performOperation(int fstOperand, int sndOperant, char operatr)
{
	// std::cout << fstOperand << " " << operatr << " " << sndOperant << std::endl;
	if (operatr == '+')
		return (fstOperand + sndOperant);
	else if (operatr == '-')
		return (fstOperand - sndOperant);
	else if (operatr == '*')
		return (fstOperand * sndOperant);
	else // if (operatr == '/')
		return (fstOperand / sndOperant);
}

void	rpnAlgorithm(std::string line) {
	int fstOperand;
	int sndOperand;
	if (!checkLine(line))
	{
		std::cout << "Error" << std::endl;
		return ;
	}
	std::stack<int> stack;

	for (int i = 0; line[i]; i++)
	{
		if (line[i] == '+' || line[i] == '-' || line[i] == '*' || line[i] == '/')
		{
			if (!stack.empty())
			{
				if (line[i] == '/' && !stack.top())
				{
					std::cout << "Error" << std::endl;
					return ;
				}
				sndOperand = stack.top();
				stack.pop();
			}
			else
			{
				std::cout << "Error" << std::endl;
				return ;
			}
			if (!stack.empty())
			{
				fstOperand = stack.top();
				stack.pop();
			}
			else
			{
				std::cout << "Error" << std::endl;
				return ;
			}
			stack.push(performOperation(fstOperand, sndOperand, line[i]));
		}
		if (line[i] >= '0' && line[i] <= '9')
			stack.push(line[i] - '0');
	}
	if (stack.size() != 1)
	{
		std::cout << "Error" << std::endl;
		return ;
	}
	std::cout << stack.top() << std::endl;
	stack.pop();
}