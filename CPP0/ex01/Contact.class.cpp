/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschende <bschende@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 16:30:34 by bschende          #+#    #+#             */
/*   Updated: 2022/08/26 15:19:57 by bschende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

Contact::Contact(void)
{
	// std::cout << "Constructor called" << std::endl;
}

int	Contact::checkascii(std::string str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((int)str[i] >= 0 && (int)str[i] < 128)
			return (1);
		i++;
	}
	return (0);
}

void Contact::setcontactdetails(void)
{
	while (1)
	{
		std::cout << "Enter first Name:" << std::endl;
		getline(std::cin, fname);
		if (fname.length() > 0)
		{
			if (checkascii(fname))
				break;
			else
				std::cout << "Please use only ASCII characters" << std::endl;
		}
		else
			std::cout << "Please fill out all the details (no empty fields)" << std::endl;
	}
	while (1)
	{
		std::cout << "Enter last Name:" << std::endl;
		getline(std::cin, lname);
		if (lname.length() > 0)
		{
			if (checkascii(lname))
				break;
			else
				std::cout << "Please use only ASCII characters" << std::endl;
		}
		else
			std::cout << "Please fill out all the details (no empty fields)" << std::endl;
	}
	while (1)
	{
		std::cout << "Enter nickname:" << std::endl;
		getline(std::cin, nname);
		if (nname.length() > 0)
		{
			if (checkascii(nname))
				break;
			else
				std::cout << "Please use only ASCII characters" << std::endl;
		}
		else
			std::cout << "Please fill out all the details (no empty fields)" << std::endl;
	}
	while (1)
	{
		std::cout << "Enter phone number:" << std::endl;
		getline(std::cin, phone);
		if (phone.length() > 0)
		{
			if (checkascii(phone))
				break;
			else
				std::cout << "Please use only ASCII characters" << std::endl;
		}
		else
			std::cout << "Please fill out all the details (no empty fields)" << std::endl;
	}
	while (1)
	{
		std::cout << "Enter darkest secret:" << std::endl;
		getline(std::cin, dsecret);
		if (dsecret.length() > 0)
		{
			if (checkascii(dsecret))
				break;
			else
				std::cout << "Please use only ASCII characters" << std::endl;
		}
		else
			std::cout << "Please fill out all the details (no empty fields)" << std::endl;
	}
}

std::string	Contact::getcontactdetail(int i)
{
	std::string	detail;

	if (i == 1)
		detail = fname;
	if (i == 2)
		detail = lname;
	if (i == 3)
		detail = nname;
	if (i == 4)
		detail = phone;
	if (i == 5)
		detail = dsecret;
	return (detail);
}

Contact::~Contact(void)
{
	// std::cout << "Deconstructor called" << std::endl;
}
