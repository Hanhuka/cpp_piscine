/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-g <ralves-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 16:09:07 by ralves-g          #+#    #+#             */
/*   Updated: 2023/03/24 14:40:15 by ralves-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap{
protected:
	ScavTrap();
public:
	ScavTrap(const std::string& name);
	ScavTrap(const ScavTrap& ref);
	ScavTrap&	operator=(const ScavTrap& ref);
	void	attack(const std::string& target);
	void	guardGate();
	~ScavTrap();
};