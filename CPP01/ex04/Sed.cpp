/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschende <bschende@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 16:13:44 by bschende          #+#    #+#             */
/*   Updated: 2022/09/15 17:55:53 by bschende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

int	replace(char **av, std::string infile)
{
	std::ifstream		ifs(infile);
	std::stringstream	buffer;
	std::string			contents;
	std::string			string1;
	int					i = 0;

	if (!ifs.good())
	{
		std::cout << "Infile does not exist!" << std::endl;
		return (1);
	}
	std::ofstream	ofs(infile.append(".replace"));
	string1 = av[2];
	buffer << ifs.rdbuf();
	contents = buffer.str();
	ifs.close();
	while ((i = contents.find(string1, i + 1)) >= 0)
	{
		contents.erase(i, string1.length());
		contents.insert(i, av[3]);
	}
	ofs << contents;
	ofs.close();
	return (0);
}