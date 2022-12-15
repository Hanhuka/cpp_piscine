/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-g <ralves-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 11:29:53 by ralves-g          #+#    #+#             */
/*   Updated: 2022/12/15 16:23:48 by ralves-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*ZombieHorde(int N, std::string zname) {

	Zombie *homies;

	homies = new Zombie[N];
	for (int n = 0; n < N; n++)
		homies[n].setName(zname);
	return (homies);
}