/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschende <bschende@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 10:28:17 by bschende          #+#    #+#             */
/*   Updated: 2022/08/26 12:48:09 by bschende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.class.hpp"

PhoneBook::PhoneBook(void)
{
	std::cout << "Constructor called" << std::endl;
	return;
}

PhoneBook::~PhoneBook(void)
{
	std::cout << "Deconstructor called" << std::endl;
	return;
}

int		addentry(int index)
{
	details[index].details();
	book[index] = savecontact(details);
	index++;
	return (index);
}

// void	PhoneBook::contactsearch(int index)
// {
// 	std::string sfname;
// 	std::string slname;
// 	std::string snname;
// 	int			i;
// 	int			j;

// 	i = cfname.length() - 1;
// 	j = 9;
// 	if (i > 9)
// 	{
// 		sfname = cfname.substr(0, 10);
// 		sfname[9] = '.';
// 	}
// 	else if (i < 9)
// 	{
// 		while (j >= 0)
// 		{
// 			while (i >= 0)
// 				sfname[j--] = cfname[i--];
// 			sfname[j] = '.';
// 			j--;
// 		}
// 	}
// 	i = clname.length() - 1;
// 	j = 9;
// 	if (i > 9)
// 	{
// 		slname = clname.substr(0, 10);
// 		slname[9] = '.';
// 	}
// 	else if (i < 9)
// 	{
// 		while (j >= 0)
// 		{
// 			while (i >= 0)
// 				slname[j--] = clname[i--];
// 			slname[j] = '.';
// 			j--;
// 		}
// 	}
// 	i = cnname.length() - 1;
// 	j = 9;
// 	if (i > 9)
// 	{
// 		snname = cnname.substr(0, 10);
// 		snname[9] = '.';
// 	}
// 	else if (i < 9)
// 	{
// 		while (j >= 0)
// 		{
// 			while (i >= 0)
// 				snname[j--] = cnname[i--];
// 			snname[j] = '.';
// 			j--;
// 		}
// 	}
// 	std::cout << "         " << index + 1 << "|" << sfname << "|" << slname << "|" << snname << std::endl;
// }
