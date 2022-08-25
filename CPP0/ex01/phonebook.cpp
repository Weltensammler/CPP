/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschende <bschende@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 10:35:52 by bschende          #+#    #+#             */
/*   Updated: 2022/08/25 20:44:14 by bschende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.class.hpp"
#include "Contact.class.hpp"

int	checkinput(std::string str, int index, int count)
{
	int	i;

	if (str.length() > 1 || str.length() < 1)
		return (1);
	if (!isdigit(str[0]))
		return (1);
	if (count == 8)
	{
		if (str[0] > '8' || str[0] < '1')
			return (1);
		else
			return (0);
	}
	else
	{
		i = stoi(str);
		if (i > index || str[0] < '1')
			return (1);
		else
			return (0);
	}
}

std::string	formatcontact(std::string str)
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

void	contactsearch(int index, PhoneBook& book)
{
	std::string sfname;
	std::string slname;
	std::string snname;

	sfname = formatcontact(book.cfname);
	slname = formatcontact(book.clname);
	snname = formatcontact(book.cnname);
	std::cout << "         " << index + 1 << "|" << sfname << "|" << slname << "|" << snname << std::endl;
}

PhoneBook	savecontact(Contact& details)
{
	PhoneBook book;

	if (details.fname.length() != 0)
		book.cfname = details.fname;
	if (details.lname.length() != 0)
		book.clname = details.lname;
	if (details.nname.length() != 0)
		book.cnname = details.nname;
	if (details.phone.length() != 0)
		book.cphone = details.phone;
	if (details.dsecret.length() != 0)
		book.cdsecret = details.dsecret;
	return (book);
}

void	outputdetails(PhoneBook& book)
{
	std::cout << "First Name    : " << book.cfname << std::endl;
	std::cout << "Last Name     : " << book.clname << std::endl;
	std::cout << "Nick Name     : " << book.cnname << std::endl;
	std::cout << "Phone number  : " << book.cphone << std::endl;
	std::cout << "Darkest secret: " << book.cdsecret << std::endl;
}

int	main(void)
{
	PhoneBook	book[8];
	Contact		details;
	std::string	input;
	std::string	c;
	int			i = 0;
	int			j = 0;
	int			x = 0;
	int			count;

	input = "ONE";
	count = 0;
	while (input.compare("EXIT"))
	{
		std::cout << "What would you like to do?\nAdd new Contact.......enter \"ADD\".\nSearch for a Contact..enter \"SEARCH\".\nExit the Phonebook....enter \"EXIT\"" << std::endl;
		getline(std::cin, input);
		if (!input.compare("ADD"))
		{
			details.details();
			book[i] = savecontact(details);
			i++;
			if (i > 7)
			{
				i = 0;
				count = 8;
			}
		}
		if (!input.compare("SEARCH"))
		{
			while (j < i || j < count)
			{
				contactsearch(j, book[j]);
				j++;
			}
			while (x > j || x < 1)
			{
				std::cout << "Please choose a Contact to be displayed (Enter indexnumber):" << std::endl;
				getline(std::cin, c);
				if (!checkinput(c, i, count))
					x = stoi(c);
			}
			outputdetails(book[x - 1]);
			x = 0;
			j = 0;
		}
	}
	return (0);
}
