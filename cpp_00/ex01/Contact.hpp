/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-g <ralves-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 14:35:27 by ralves-g          #+#    #+#             */
/*   Updated: 2022/11/25 16:49:42 by ralves-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

class Contact {

private:
	int			cStatus;
	std::string	fstName;
	std::string	lstName;
	std::string	nickname;
	std::string	phoneNbr;
	std::string	darkScret;

	void		setParameter(std::string const&str, std::string &parameter);

public:
	Contact(void);
	~Contact(void);

	int			status(void);
	void		setContact(void);
	std::string	getParameter(int opt);
};


#endif