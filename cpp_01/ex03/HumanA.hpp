/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-g <ralves-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 14:07:42 by ralves-g          #+#    #+#             */
/*   Updated: 2022/12/15 10:57:38 by ralves-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class HumanA {
	public:
		HumanA(std::string const &n, Weapon &w);
		~HumanA(void);
		void	attack(void);

	private:
		std::string name;
		Weapon *weapon;
};

#endif