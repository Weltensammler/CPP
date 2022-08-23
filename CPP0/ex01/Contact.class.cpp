/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschende <bschende@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 16:30:34 by bschende          #+#    #+#             */
/*   Updated: 2022/08/23 15:33:27 by bschende         ###   ########.fr       */
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
	std::cin >> fname;
	std::cout << "Enter last Name:" << std::endl;
	getline(std::cin, lname);
	std::cout << "Enter Nickame:" << std::endl;
	getline(std::cin, nname);
	std::cout << "Enter Phone number:" << std::endl;
	getline(std::cin, phone);
	std::cout << "Enter darkest secret:" << std::endl;
	getline(std::cin, dsecret);
}

Contact::~Contact(void)
{
	std::cout << "Deconstructor called" << std::endl;
	return;
}
