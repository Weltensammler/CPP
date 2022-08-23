/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschende <bschende@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 10:35:52 by bschende          #+#    #+#             */
/*   Updated: 2022/08/23 18:56:52 by bschende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.class.hpp"
#include "Contact.class.hpp"

void	contactsearch(int index, PhoneBook book)
{
	std::string sfname;
	std::string slname;
	std::string snname;
	int			i;
	int			j;

	i = book.cfname.length() - 1;
	j = 9;
	if (i > 9)
	{
		sfname = book.cfname.substr(0, 10);
		sfname[9] = '.';
	}
	else if (i < 9)
	{
		while (j >= 0)
		{
			while (i >= 0)
				sfname[j--] = book.cfname[i--];
			sfname[j] = '.';
			j--;
		}
	}
	i = book.clname.length() - 1;
	j = 9;
	if (i > 9)
	{
		slname = book.clname.substr(0, 10);
		slname[9] = '.';
	}
	else if (i < 9)
	{
		while (j >= 0)
		{
			while (i >= 0)
				slname[j--] = book.clname[i--];
			slname[j] = '.';
			j--;
		}
	}
	i = book.cnname.length() - 1;
	j = 9;
	if (i > 9)
	{
		snname = book.cnname.substr(0, 10);
		snname[9] = '.';
	}
	else if (i < 9)
	{
		while (j >= 0)
		{
			while (i >= 0)
				snname[j--] = book.cnname[i--];
			snname[j] = '.';
			j--;
		}
	}
	std::cout << "         " << index + 1 << "|" << sfname << "|" << slname << "|" << snname << std::endl;
	std::cout << "         " << index + 1 << "|" << book.cfname << "|" << book.clname << "|" << book.cnname << std::endl;
}

PhoneBook	savecontact(Contact details)
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

int	main(void)
{
	PhoneBook	book[8];
	Contact		details;
	std::string	input;
	int			i = 0;
	int			j = 0;

	input = "ONE";
	while (input.compare("EXIT"))
	{
		std::cout << "What would you like to do?\nAdd new Contact.......enter \"ADD\".\nSearch for a Contact..enter \"SEARCH\".\nExit the Phonebook....enter \"EXIT\"" << std::endl;
		std::cin >> input;
		if (!input.compare("ADD"))
		{
			details.details();
			book[i] = savecontact(details);
			i++;
			// else
			// 	std::cout << "Please fill out all the details!" << std::endl;
			std::cout << "         " << i << "|" << book[i].cfname << "|" << book[i].clname << "|" << book[i].cnname << std::endl;
		}
		if (!input.compare("SEARCH"))
		{
			while (j <= i)
			{
				contactsearch(j, book[j]);
				j++;
			}
			j = 0;
		}
		if (i > 7)
			i = 0;
	}
	return (0);
}
