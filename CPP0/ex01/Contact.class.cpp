/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschende <bschende@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 16:30:34 by bschende          #+#    #+#             */
/*   Updated: 2022/08/25 19:53:52 by bschende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.class.hpp"

Contact::Contact(void)
{
	std::cout << "Constructor called" << std::endl;
	return;
}

void Contact::details(void)
{
	while (1)
	{
		std::cout << "Enter first Name:" << std::endl;
		getline(std::cin, fname);
		if (fname.length() > 0)
			break;
		std::cout << "Please fill out all the details (no empty fields)" << std::endl;
	}
	while (1)
	{
		std::cout << "Enter last Name:" << std::endl;
		getline(std::cin, lname);
		if (lname.length() > 0)
			break;
		std::cout << "Please fill out all the details (no empty fields)" << std::endl;
	}
	while (1)
	{
		std::cout << "Enter nickname:" << std::endl;
		getline(std::cin, nname);
		if (nname.length() > 0)
			break;
		std::cout << "Please fill out all the details (no empty fields)" << std::endl;
	}
	while (1)
	{
		std::cout << "Enter phone number:" << std::endl;
		getline(std::cin, phone);
		if (phone.length() > 0)
			break;
		std::cout << "Please fill out all the details (no empty fields)" << std::endl;
	}
	while (1)
	{
		std::cout << "Enter darkest secret:" << std::endl;
		getline(std::cin, dsecret);
		if (dsecret.length() > 0)
			break;
		std::cout << "Please fill out all the details (no empty fields)" << std::endl;
	}
}

// void Contact::setName(std::string name)
// {
// 	_name = name;
// }

Contact::~Contact(void)
{
	std::cout << "Deconstructor called" << std::endl;
	return;
}
