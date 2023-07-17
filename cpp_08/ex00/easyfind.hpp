/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-g <ralves-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 14:58:18 by ralves-g          #+#    #+#             */
/*   Updated: 2023/06/15 16:38:14 by ralves-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <algorithm>
# include <vector>
# include <exception>

class NBRNOTFOUND: public std::exception {
	virtual const char *what() const throw() {
		return ("Error: Number not found\n");
	}
};

template <typename T>
int&	easyfind(T cont, int const& toFind) {
	typename T::iterator check;
	
	check = std::find(cont.begin(), cont.end(), toFind);
	
	if (check != cont.end())
		return (*check);
	else
		throw NBRNOTFOUND();
}


#endif