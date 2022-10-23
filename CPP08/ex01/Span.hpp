/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschende <bschende@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 15:34:44 by bschende          #+#    #+#             */
/*   Updated: 2022/10/23 17:26:45 by bschende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <string>

class Span{
	private:
						int				*_array;
						unsigned int	_size;
						unsigned int	_count;
	public:
						Span(void);						//done
						Span(unsigned int N);			//done
						Span(Span const &src);			//done
		Span			&operator=(Span const &src);	//done
						~Span(void);
		void			addNumber(int i);
		unsigned int	shortestSpan(void);
		unsigned int	longestSpan(void);
};

#endif
