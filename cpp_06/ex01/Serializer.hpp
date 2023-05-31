/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-g <ralves-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 17:25:33 by ralves-g          #+#    #+#             */
/*   Updated: 2023/05/31 18:04:43 by ralves-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

# include <stdint.h>
# include "Data.hpp"

class Serializer {
	public:
		Serializer();
		Serializer(Serializer const& ref);
		Serializer&	operator=(Serializer const& ref);
		~Serializer();
		static	uintptr_t	serialize(Data* ptr);
		static	Data*	deserialize(uintptr_t raw);
};

#endif