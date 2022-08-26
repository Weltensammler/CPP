/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschende <bschende@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 10:35:52 by bschende          #+#    #+#             */
/*   Updated: 2022/08/26 14:43:59 by bschende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"

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

int	main(void)
{
	PhoneBook	book;
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
			i = book.addentry(i);
			if (i > 7)
			{
				i = 0;
				count = 8;
			}
		}
		if (!input.compare("SEARCH"))
		{
			if (i == 0 && count == 0)
				std::cout << "The Phonebook is empty." << std::endl;
			else
			{
				while (j < i || j < count)
				{
					book.contactsearch(j);
					j++;
				}
				while (x > j || x < 1)
				{
					std::cout << "Please choose a Contact to be displayed (Enter indexnumber):" << std::endl;
					getline(std::cin, c);
					if (!checkinput(c, i, count))
						x = stoi(c);
				}
				book.outputdetails(x - 1);
				x = 0;
				j = 0;
			}
		}
	}
	return (0);
}
