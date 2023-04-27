/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-g <ralves-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 14:32:46 by ralves-g          #+#    #+#             */
/*   Updated: 2023/04/27 12:16:59 by ralves-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal {
protected:
	std::string _type;
public:
	Animal();
	Animal(const Animal& ref);
	Animal& operator=(const Animal& ref);
	virtual void	makeSound() const = 0;
	virtual void	ideas() const = 0;
	virtual std::string	getType() const = 0;
	virtual ~Animal();
};

#endif