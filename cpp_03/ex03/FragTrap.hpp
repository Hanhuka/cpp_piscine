/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-g <ralves-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 12:12:00 by ralves-g          #+#    #+#             */
/*   Updated: 2023/03/21 14:57:49 by ralves-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap {
protected:
	FragTrap();
public:
	FragTrap(const std::string name);
	FragTrap(const FragTrap& ref);
	FragTrap& operator=(const FragTrap& ref);
	void attack(const std::string& target);
	void	highFiveGuys(void);
	~FragTrap();
};

#endif