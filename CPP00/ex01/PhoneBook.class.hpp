/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschende <bschende@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 10:13:01 by bschende          #+#    #+#             */
/*   Updated: 2022/08/26 14:04:24 by bschende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

#include <iostream>
#include <string>
#include "Contact.class.hpp"

class PhoneBook {
private:
	Contact	details[8];

public:
	int			addentry(int index);
	void		contactsearch(int index);
	std::string	formatcontact(std::string str);
	void		outputdetails(int i);
	PhoneBook(void);
	~PhoneBook(void);
};

#endif
