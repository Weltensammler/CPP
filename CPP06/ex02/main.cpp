/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschende <bschende@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 12:13:12 by bschende          #+#    #+#             */
/*   Updated: 2022/10/22 14:12:58 by bschende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int	randerator(void)
{
	std::srand((unsigned)time(NULL));
	return (std::rand() % 3);
}

Base * generate(void)
{
	int i = randerator();

	if (i == 0)
		return (dynamic_cast<Base*>(new A));
	else if (i == 1)
		return (dynamic_cast<Base*>(new B));
	else if (i == 2)
		return (dynamic_cast<Base*>(new C));
	else
		return (dynamic_cast<Base*>(new A));
}

void identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "Type = A" << std::endl;
	if (dynamic_cast<B*>(p))
		std::cout << "Type = B" << std::endl;
	if (dynamic_cast<C*>(p))
		std::cout << "Type = C" << std::endl;
}

void identify(Base& p)
{
	try
	{
		A& a = dynamic_cast<A&>(p);
		(void)a;
		std::cout << "Type = A" << std::endl;
	}
	catch(std::bad_cast& bc)
	{
	}
	try
	{
		B& b = dynamic_cast<B&>(p);
		(void)b;
		std::cout << "Type = B" << std::endl;
	}
	catch(std::bad_cast& bc)
	{
	}
	try
	{
		C& c = dynamic_cast<C&>(p);
		(void)c;
		std::cout << "Type = C" << std::endl;
	}
	catch(std::bad_cast& bc)
	{
	}
}

int	main(void)
{
	Base* ptr;
	
	ptr = generate();
	Base& ref = *ptr;
	identify(ptr);
	identify(ref);
	delete (ptr);
	return (0);
}
