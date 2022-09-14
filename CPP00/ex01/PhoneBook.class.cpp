/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschende <bschende@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 10:28:17 by bschende          #+#    #+#             */
/*   Updated: 2022/08/26 15:19:42 by bschende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"

PhoneBook::PhoneBook(void)
{
	// std::cout << "Constructor called" << std::endl;
}

PhoneBook::~PhoneBook(void)
{
	// std::cout << "Deconstructor called" << std::endl;
}

int		PhoneBook::addentry(int index)
{
	details[index].setcontactdetails();
	index++;
	return (index);
}

std::string	PhoneBook::formatcontact(std::string str)
{
	std::string	detail;
	int			i;
	int			j;

	detail = "          ";
	i = str.length() - 1;
	j = 9;
	if (i > 9)
	{
		detail = str.substr(0, 10);
		detail[9] = '.';
	}
	else if (i < 9)
	{
		while (j >= 0)
		{
			while (i >= 0)
				detail[j--] = str[i--];
			detail[j] = '.';
			j--;
		}
	}
	return (detail);
}

void	PhoneBook::contactsearch(int index)
{
	std::string sfname;
	std::string slname;
	std::string snname;

	sfname = formatcontact(details[index].getcontactdetail(1));
	slname = formatcontact(details[index].getcontactdetail(2));
	snname = formatcontact(details[index].getcontactdetail(3));
	std::cout << "         " << index + 1 << "|" << sfname << "|" << slname << "|" << snname << std::endl;
}

void	PhoneBook::outputdetails(int i)
{
	std::cout << "First Name    : " << details[i].getcontactdetail(1) << std::endl;
	std::cout << "Last Name     : " << details[i].getcontactdetail(2) << std::endl;
	std::cout << "Nick Name     : " << details[i].getcontactdetail(3) << std::endl;
	std::cout << "Phone number  : " << details[i].getcontactdetail(4) << std::endl;
	std::cout << "Darkest secret: " << details[i].getcontactdetail(5) << std::endl;
}
