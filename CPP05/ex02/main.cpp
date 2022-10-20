/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschende <bschende@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 11:03:21 by ben               #+#    #+#             */
/*   Updated: 2022/10/20 22:58:35 by bschende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{
	Bureaucrat bur1("Bur 1", 1);
	Bureaucrat bur2("Bur 2", 150);

	ShrubberyCreationForm shrubby("Bathroom");
	RobotomyRequestForm robot("Tree");
	PresidentialPardonForm presi("Ben");

	std::cout << "-----Test 1: Execute a not signed form-----" << std::endl;
	std::cout << shrubby;
	bur1.executeForm(shrubby);

	std::cout << "\n-----Test 2: Execute with a too low grade-----" << std::endl;
	std::cout << bur2 << "Grade needed to execute: 145" << std::endl;
	bur2.executeForm(shrubby);

	std::cout << "\n-----Test 3: Sign form and execute-----" << std::endl;
	std::cout << shrubby;
	std::cout << bur1;
	bur1.signForm(shrubby);
	bur1.executeForm(shrubby);

	std::cout << "\n-----Test 4: Sign Robo form and execute-----" << std::endl;
	bur1.signForm(robot);
	bur1.executeForm(robot);

	std::cout << "\n-----Test 5: Sign Presidential form and execute-----" << std::endl;
	bur1.signForm(presi);
	bur1.executeForm(presi);
	return (0);
}