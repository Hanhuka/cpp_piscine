/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-g <ralves-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 17:03:29 by ralves-g          #+#    #+#             */
/*   Updated: 2023/04/03 17:18:43 by ralves-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
class Brain {
private:
	std::string ideas[100];
public:
	Brain();
	Brain(const Brain& ref);
	giveIdeas();
	~Brain();
};