/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-g <ralves-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 17:47:17 by ralves-g          #+#    #+#             */
/*   Updated: 2023/05/31 18:09:28 by ralves-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP

class Data {
	public:
		Data();
		Data(Data const& ref);
		Data(int const& dataVal);
		Data&	operator=(Data const& ref);
		~Data();
		void	printData();
	private:
		int	DataInt;
};

#endif