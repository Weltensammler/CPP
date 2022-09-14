/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschende <bschende@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 10:15:42 by bschende          #+#    #+#             */
/*   Updated: 2022/08/26 16:48:18 by bschende         ###   ########.fr       */
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
	Contact(void);
	~Contact(void);
	int	checkascii(std::string str);
	void setcontactdetails(void);
	std::string getcontactdetail(int i);
};

#endif
