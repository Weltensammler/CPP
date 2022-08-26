/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschende <bschende@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 10:15:42 by bschende          #+#    #+#             */
/*   Updated: 2022/08/26 12:12:23 by bschende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

#include <iostream>
#include <string>

class Contact {
private:
	std::string fname;
	std::string lname;
	std::string nname;
	std::string phone;
	std::string dsecret;
	
public:
	// std::string	fname;
	// std::string	lname;
	// std::string	nname;
	// std::string	phone;
	// std::string	dsecret;
	Contact(void);
	void details(void);
	~Contact(void);
	void setcontactdetail(std::string name); //Use setter to set variables and move them to private, use getter to get variables from private and move them to phonebook
	std::string getcontactdetail(int i);
};

#endif
