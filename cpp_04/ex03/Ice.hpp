/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-g <ralves-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 16:34:28 by ralves-g          #+#    #+#             */
/*   Updated: 2023/04/21 15:22:08 by ralves-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice: public AMateria {
	protected:
		Ice(Ice const& ref);
		Ice& operator=(Ice const& ref);
	public:
		Ice();
		virtual AMateria* clone() const;
		virtual void use(ICharacter& target);
		~Ice();
};

#endif