/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   converterUtils.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-g <ralves-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 17:32:14 by ralves-g          #+#    #+#             */
/*   Updated: 2023/05/29 17:34:20 by ralves-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERTER_UTILS_HPP
# define CONVERTER_UTILS_HPP

#include <string>

enum e_type {
	T_CHR,
	T_INT,
	T_DBL,
	T_FLT,
	T_UNKNN
};

int		valCount(std::string	toCheck, char toCount);
bool	getType(std::string toCheck);
void	castInt(std::string toConvert);
void	castChr(std::string toConvert);

#endif