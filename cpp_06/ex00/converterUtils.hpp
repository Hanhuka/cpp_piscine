/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   converterUtils.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-g <ralves-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 17:32:14 by ralves-g          #+#    #+#             */
/*   Updated: 2023/05/31 14:30:45 by ralves-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERTER_UTILS_HPP
# define CONVERTER_UTILS_HPP

#include <string>

enum e_type {
	T_CHR,
	T_INT,
	T_FLT,
	T_DBL,
	T_UNKNN
};

int		valCount(std::string	toCheck, char toCount);
int	getType(std::string toCheck);
void	castInt(std::string toConvert);
void	castChr(std::string toConvert);
void	castFlt(std::string toConvert);
void	castDbl(std::string toConvert);


#endif