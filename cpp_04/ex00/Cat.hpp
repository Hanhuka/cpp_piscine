/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-g <ralves-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 14:32:43 by ralves-g          #+#    #+#             */
/*   Updated: 2023/04/03 16:34:25 by ralves-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class Cat: public Animal {
private:
	std::string	_type;
public:
	Cat();
	Cat(const Cat& ref);
	Cat&	operator=(const Cat& ref);
	virtual void	makeSound() const;
	virtual std::string	getType() const;
	virtual ~Cat();
};


#endif