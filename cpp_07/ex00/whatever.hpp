/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-g <ralves-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 15:27:01 by ralves-g          #+#    #+#             */
/*   Updated: 2023/06/09 16:04:27 by ralves-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template<typename T>
void	printVal(T& test)
{
	std::cout << test << std::endl;
}

template<typename T>
void	mySwap(T& first, T& second) {
	T tmp;

	tmp = first;
	first = second;
	second = tmp;
}

template<typename T>
T const&	myMin(T const& first, T const& second) {
	return (first < second ? first: second);
}

template<typename T>
T const&	myMax(T const& first, T const& second) {
	return (first > second ? first: second);
}

#endif