/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-g <ralves-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 14:23:05 by ralves-g          #+#    #+#             */
/*   Updated: 2022/12/15 15:46:54 by ralves-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>

class Harl {
	public:
		Harl(void);
		~Harl(void);
		void complain(std::string level);

	private:
		
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
		std::string	type[4];
};

#endif