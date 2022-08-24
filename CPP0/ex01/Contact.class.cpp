/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschende <bschende@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 16:30:34 by bschende          #+#    #+#             */
/*   Updated: 2022/08/24 17:16:29 by bschende         ###   ########.fr       */
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
	std::cout << "Enter first Name:" << std::endl;
	getline(std::cin, fname);
	std::cout << "Enter last Name:" << std::endl;
	getline(std::cin, lname);
	std::cout << "Enter nickname:" << std::endl;
	getline(std::cin, nname);
	std::cout << "Enter phone number:" << std::endl;
	getline(std::cin, phone);
	std::cout << "Enter darkest secret:" << std::endl;
	getline(std::cin, dsecret);
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
