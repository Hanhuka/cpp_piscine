/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-g <ralves-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 14:35:33 by ralves-g          #+#    #+#             */
/*   Updated: 2022/11/25 18:10:49 by ralves-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

class PhoneBook {

private:
	void	print_parameter(int i, int i2);
	void	print_header(void);

public:
	Contact c[8];
	PhoneBook(void);
	~PhoneBook(void);

	Contact getContact(int n);
	void	print_search(void);
};

#endif