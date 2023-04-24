/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-g <ralves-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 15:32:01 by ralves-g          #+#    #+#             */
/*   Updated: 2023/04/24 15:00:37 by ralves-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIA_SOURCE_HPP
# define MATERIA_SOURCE_HPP

# include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource {
	private:
	 AMateria	*_learntMaterias[4];
	public:
		MateriaSource();
		MateriaSource(MateriaSource const& ref);
		MateriaSource& operator=(MateriaSource const& ref);
		~MateriaSource();
		virtual void learnMateria(AMateria* toLearn);
		virtual AMateria* createMateria(std::string const& type);
};


#endif