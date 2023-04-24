/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-g <ralves-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 16:31:31 by ralves-g          #+#    #+#             */
/*   Updated: 2023/04/21 15:22:31 by ralves-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class Cure: public AMateria {
	protected:
		Cure(Cure const& ref);
		Cure& operator=(Cure const& ref);
	public:
		Cure();
		virtual AMateria* clone() const;
		virtual void use(ICharacter& target);
		~Cure();
};

#endif