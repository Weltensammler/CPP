/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschende <bschende@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 16:30:34 by bschende          #+#    #+#             */
/*   Updated: 2022/08/22 17:13:10 by bschende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.class.hpp"

using namespace std;

Contact::Contact(void)
{
	std::cout << "Constructor called" << std::endl;
	return;
}

void Contact::details(void)
{
	cout << "Enter first Name:";
	cin >> fname;
	cout << endl;
	cout << "Enter last Name:";
	cin >> lname;
	cout << endl;
	cout << "Enter Nickame:";
	cin >> nname;
	cout << endl;
	cout << "Enter Phone number:";
	cin >> phone;
	cout << endl;
	cout << "Enter darkest secret:";
	cin >> dsecret;
	cout << endl;
}

Contact::~Contact(void)
{
	std::cout << "Deconstructor called" << std::endl;
	return;
}
