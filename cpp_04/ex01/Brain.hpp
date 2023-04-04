/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-g <ralves-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 17:03:29 by ralves-g          #+#    #+#             */
/*   Updated: 2023/04/04 16:29:39 by ralves-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <cstdlib>

class Brain {
private:
	std::string	_ideas[100];
public:
	Brain();
	Brain(const Brain& ref);
	Brain&	operator=(const Brain& ref);
	std::string	*giveIdeas();
	~Brain();
};

#endif