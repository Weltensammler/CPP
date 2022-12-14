/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschende <bschende@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 19:19:12 by bschende          #+#    #+#             */
/*   Updated: 2022/09/15 17:53:42 by bschende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

int	main(int argc, char **argv)
{
	std::string	infile = argv[1];

	if (argc != 4)
	{
		std::cout << "Invalid number of arguments!" << std::endl;
		return (1);
	}
	replace(argv, infile);
	return (0);
}