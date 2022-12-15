/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-g <ralves-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 14:20:49 by ralves-g          #+#    #+#             */
/*   Updated: 2022/12/15 11:21:24 by ralves-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB {
	public:
		HumanB(std::string const &n);
		~HumanB(void);
		void	setWeapon(Weapon &w);
		void	attack(void);

	private:
		std::string name;
		Weapon *weapon;
};

#endif