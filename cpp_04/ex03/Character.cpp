/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-g <ralves-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 12:06:49 by ralves-g          #+#    #+#             */
/*   Updated: 2023/04/24 16:21:20 by ralves-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Character.hpp"
# include "AMateria.hpp"

Character::Character(std::string const& name) {
	this->_name = name;
	for (int i = 0; i < 4; i++)
		_materias[i] = 0;
}

Character::Character(Character const& ref) {
	for (int i = 0; i < 4; i++)
		_materias[i] = 0;
	*this = ref;
}

Character&	Character::operator=(Character const& ref) {
	for (int i = 0; i < 4; i++)
	{
		if (_materias[i])
			delete _materias[i];
		if (ref._materias[i])
			_materias[i] = ref._materias[i]->clone();
	}
	_name = ref.getName();
	return (*this);
}

std::string	const&	Character::getName() const {
	return (_name);
}

void	Character::equip(AMateria* m) {
	for (int i = 0; i < 4; i++)
	{
		if (!_materias[i])
		{
			_materias[i] = m;
			std::cout << _name << " equipped a Materia with type ["<< m->getType() <<"] int slot " << i << std::endl;
			break;
		}
	}
}
void	Character::unequip(int idx) {
	if (_materias[idx])
		_materias[idx] = 0;
}

void	Character::use(int idx, ICharacter& target) {
	if (_materias[idx])
		_materias[idx]->use(target);
	else
		std::cout << "* " << _name << " tries to cast a Materia but nothing happens *" << std::endl;
}

Character::~Character() {
	for (int i = 0; i < 4; i++)
		if (_materias[i])
			delete _materias[i];
}