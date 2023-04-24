/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-g <ralves-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 16:19:58 by ralves-g          #+#    #+#             */
/*   Updated: 2023/04/21 15:18:45 by ralves-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include "ICharacter.hpp"

// class ICharacter;

class AMateria {
	private:
	protected:
		std::string	_type;
		AMateria();
	public:
		virtual ~AMateria();
		AMateria(std::string const& type);
		AMateria(AMateria const& ref);
		AMateria& operator=(AMateria const& ref);
		std::string const & getType() const;
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif