/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-g <ralves-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 12:55:54 by ralves-g          #+#    #+#             */
/*   Updated: 2022/12/14 15:36:56 by ralves-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class Weapon {
	public:
		Weapon(void);
		Weapon(std::string const &n);
		~Weapon(void);
		void	setType(std::string const &newType);
		std::string	const &getType(void);

	private:
		std::string	type;
};

#endif