/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-g <ralves-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 15:41:47 by ralves-g          #+#    #+#             */
/*   Updated: 2023/04/24 16:30:26 by ralves-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	for (int i = 0; i < 4; i++)
		_learntMaterias[i] = 0;
}

MateriaSource::MateriaSource(MateriaSource const& ref) {
	*this = ref;
}

MateriaSource&	MateriaSource::operator=(MateriaSource const& ref) {
	for (int i = 0; i < 4; i++)
		_learntMaterias[i] = ref._learntMaterias[i]->clone();
	return *this;
}

void	MateriaSource::learnMateria(AMateria* toLearn) {
	for (int i = 0; i < 4; i++)
	{
		if (!_learntMaterias[i])
		{
			_learntMaterias[i] = toLearn;
			break;
		}
	}
}

AMateria*	MateriaSource::createMateria(std::string const& type) {
	for (int i = 0; i < 4; i++)
		if (_learntMaterias[i] && type == _learntMaterias[i]->getType())
			return (_learntMaterias[i]->clone());
	std::cout << "Couldn't learn Materia type doesnt match" << std::endl;
	return (0);
}

MateriaSource::~MateriaSource() {
	for (int i = 0; i < 4; i++)
		if (_learntMaterias[i])
			{
				// std::cout << "deleting Materia ont slot " << i << std::endl;
				delete _learntMaterias[i];
			}
}