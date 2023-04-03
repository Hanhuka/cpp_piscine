/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-g <ralves-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 14:32:53 by ralves-g          #+#    #+#             */
/*   Updated: 2023/04/03 16:34:34 by ralves-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog: public Animal {
private:
	std::string	_type;
public:
	Dog();
	Dog(const Dog& ref);
	Dog&	operator=(const Dog& ref);
	virtual void	makeSound() const;
	virtual std::string	getType() const;
	virtual ~Dog();
};



#endif