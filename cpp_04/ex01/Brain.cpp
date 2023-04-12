/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-g <ralves-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 17:09:17 by ralves-g          #+#    #+#             */
/*   Updated: 2023/04/12 15:48:45 by ralves-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

std::string	getRandIdea() {
	int	r;
	std::string	eat[5] = {"Food", "Fooood", "FOOD!", "fwud", "food?!"};
	std::string	play[5] = {"Play!", "P-p-p-play?", "Plaaaaaay!", "Play?", "p-l-a-y"};
	std::string	sleep[4] = {"Sleep", "*Snooorr*", "*Slee...*", "Sl---eep..."};
	
	r = rand();
	if (r % 10 <= 4)
		return (eat[rand() % 5]);
	else if (r % 10 <= 7)
		return (play[rand() % 5]);
	else
		return (sleep[rand() % 4]);
}

Brain::Brain() {
	std::cout << "Brain default constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
		_ideas[i] = getRandIdea();
}

Brain::Brain(const Brain& ref) {
	std::cout << "Brain copy constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
		_ideas[i] = ref._ideas[i];
}

Brain& Brain::operator=(const Brain& ref) {
	std::cout << "Brain assignment operator called" << std::endl;
	for (int i = 0; i < 100; i++)
		_ideas[i] = ref._ideas[i];
	return (*this);
}

void	Brain::setIdea(const std::string newIdea, const int& i) {
	_ideas[i] = newIdea;
}

std::string	Brain::giveIdea(const int &i)
{
	_ideas[i] = getRandIdea();
	return (_ideas[i]);
}

std::string	*Brain::giveIdeas() {
	return (_ideas);
}


Brain::~Brain() {
	std::cout << "Brain destructor called" << std::endl;
}
