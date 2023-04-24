/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-g <ralves-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 15:33:18 by ralves-g          #+#    #+#             */
/*   Updated: 2023/04/03 17:01:55 by ralves-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal {
private:
	std::string	_type;
public:
	WrongCat();
	WrongCat(const WrongCat& ref);
	WrongCat&	operator=(const WrongCat& ref);
	void	makeSound() const;
	std::string	getType() const;
	~WrongCat();
};

#endif