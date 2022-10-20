/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschende <bschende@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 11:03:21 by ben               #+#    #+#             */
/*   Updated: 2022/10/20 12:01:46 by bschende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

int main()
{
	Intern intern;
	Form *forms[4];
	forms[0] = intern.makeForm("ShrubberyCreation", "Home");
	forms[1] = intern.makeForm("RobotomyRequest", "Dog");
	forms[2] = intern.makeForm("PresidentialPardon", "Tom");
	forms[3] = intern.makeForm("bla", "bla");
	for (int i = 0; i < 4; i++)
	{
		delete forms[i];
	}
	return (0);
}
