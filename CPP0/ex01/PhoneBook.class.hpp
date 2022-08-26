/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschende <bschende@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 10:13:01 by bschende          #+#    #+#             */
/*   Updated: 2022/08/26 12:46:14 by bschende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

#include "Contact.class.hpp"

class PhoneBook {
private:
	Contact	details[8];

public:
	std::string	cfname;
	std::string	clname;
	std::string	cnname;
	std::string	cphone;
	std::string	cdsecret;
	int		addentry(int index);
	void	contactsearch(int index);
	PhoneBook(void);
	~PhoneBook(void);
};

#endif
