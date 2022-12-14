/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-g <ralves-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 14:35:33 by ralves-g          #+#    #+#             */
/*   Updated: 2022/12/02 11:49:58 by ralves-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

class PhoneBook {

private:
	void	printParameter(int i, int i2);
	void	printHeader(void);
	int		indexSearch(void);

public:
	Contact c[8];
	PhoneBook(void);
	~PhoneBook(void);

	Contact getContact(int n);
	void	printSearch(void);
};

#endif