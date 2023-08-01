/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-g <ralves-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 17:35:01 by ralves-g          #+#    #+#             */
/*   Updated: 2023/07/31 18:45:22 by ralves-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"
#include <cstdlib>
#include <limits>

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

long	performOperation(long fstOperand, long sndOperant, char operatr)
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
		std::cerr << "Error" << std::endl;
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
					std::cerr << "Error" << std::endl;
					return ;
				}
				sndOperand = stack.top();
				stack.pop();
			}
			else
			{
				std::cerr << "Error" << std::endl;
				return ;
			}
			if (!stack.empty())
			{
				fstOperand = stack.top();
				stack.pop();
			}
			else
			{
				std::cerr << "Error" << std::endl;
				return ;
			}
			if (performOperation(fstOperand, sndOperand, line[i]) > std::numeric_limits<int>::max())
			{
				std::cerr << "Error" << std::endl;
				return ;
			}
			// std::cout << "result = " << performOperation(fstOperand, sndOperand, line[i]) << std::endl;
			stack.push(performOperation(fstOperand, sndOperand, line[i]));
		}
		// if (line[i] >= '0' && line[i] <= '9')
		// 	stack.push(line[i] - '0');
		if (line[i] >= '0' && line[i] <= '9')
			stack.push(std::atoi(line.c_str() + i));
		// if (line[i] >= '0' && line[i] <= '9')
		// 	std::cout << "pushing: " << std::atoi(line.c_str() + i) << std::endl;
		while (line[i] >= '0' && line[i] <= '9')
			i++;
	}
	if (stack.size() != 1)
	{
		std::cerr << "Error" << std::endl;
		return ;
	}
	std::cout << stack.top() << std::endl;
	stack.pop();
}