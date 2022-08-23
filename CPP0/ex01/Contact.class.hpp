/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschende <bschende@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 10:15:42 by bschende          #+#    #+#             */
/*   Updated: 2022/08/23 16:36:08 by bschende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

#include <iostream>
#include <string>

class Contact {
public:
	std::string	fname;
	std::string	lname;
	std::string	nname;
	std::string	phone;
	std::string	dsecret;
	Contact(void);
	void details(void);
	~Contact(void);
};

#endif
