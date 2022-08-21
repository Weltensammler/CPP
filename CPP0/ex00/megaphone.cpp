/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschende <bschende@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 17:37:58 by bschende          #+#    #+#             */
/*   Updated: 2022/08/21 19:03:57 by bschende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char **argv)
{
	int i;
	int j;
	
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	}
	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
			std::cout << (char)toupper(argv[i][j++]);
		i++;
		if (i > argc)
			std::cout << std::endl;
	}
	return (0);
}
