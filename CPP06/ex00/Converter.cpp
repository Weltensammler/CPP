/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschende <bschende@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 18:42:53 by bschende          #+#    #+#             */
/*   Updated: 2022/10/21 22:54:35 by bschende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Converter.hpp"

/*Default Constructor*/
Converter::Converter() : _input("Default"), _type(UNDETERMINED)
{
	std::cout << "Converter Default constructor called" << std::endl;
	return ;
}

/*Deconstructor*/
Converter::~Converter()
{
	std::cout << "Converter Deconstructor called" << std::endl;
	return ;
}

/*Copy Constructor*/
Converter::Converter(Converter const & src)
{
	std::cout << "Converter copy constructor called" << std::endl;
	*this = src;
	return ;
}

/*= Operator overload*/	
Converter	&Converter::operator=(Converter const &src)
{
	this->_input = src._input;
	this->_type = src._type;
	return (*this);
}

/*gets the input*/
std::string	Converter::getInput(void) const
{
	return (this->_input);
}

/*sets the input*/
void	Converter::setInput(const std::string str)
{
	this->_input = str;
	return ;
}

/*gets the type*/
types	Converter::getType(void) const
{
	return (this->_type);
}

/*outputs the converted input*/
void	Converter::outputConversions(void)
{
	if (this->_type == UNDETERMINED)
		this->identType();
	switch (this->_type)
	{
		case INVALID:
			std::cout << "This Input is invalid!" << std::endl;
			break;
		case CHAR:
			this->convertChar();
			break;
		case INT:
			this->convertInt();
			break;
		case FLOAT:
			this->convertFloat();
			break;
		case DOUBLE:
			this->convertDouble();
			break;
		case NAN_:
			this->convertNan();
			break;
		case INF:
			this->convertInf();
			break;
		default:
			std::cout << "I messed up :( " << _type << std::endl;
	}
}

/*identifies the type*/
void	Converter::identType(void)
{
	_type = INVALID;
	if (this->_input.length() == 1 && !isdigit(this->_input.at(0)))
		this->_type = CHAR;
	else if (this->_input == "nan" || this->_input == "nanf")
		this->_type = NAN_;
	else if (this->_input == "-inf" || this->_input == "+inf" || this->_input == "-inff" || this->_input == "+inff")
		this->_type = INF;
	else
		this->identNumType(this->_input);
}

/*identifies the kind of numeric type*/
void Converter::identNumType(std::string str)
{
	int		i = 0;
	int		len(str.length());
	bool	decimal(false);

	if (str.at(0) == '+' || str.at(0) == '-')
		i++;
	while (i < len)
	{
		if (str.at(i) == 'f' && (i + 1 == len) && std::isdigit(_input.at(i - 1)))
		{
			this->_type = FLOAT;
			return ;
		}
		else if (str.at(i) == '.')
		{
			if (decimal == false)
				decimal = true;
			else
				return ;
		}
		else if (!std::isdigit(str.at(i)))
			return ;
		i++;
	}
	if (decimal == true)
		this->_type = DOUBLE;
	else
		this->_type = INT;
}

/*converts input to char*/
void	Converter::convertChar(void) const
{
	char	c = this->_input.at(0);
	if (std::isprint(c))
		std::cout << "char\t: " << c << std::endl;
	else
		std::cout << "char\t: Non displayable" << std::endl;
	std::cout << "int\t: " << static_cast<int>(c) << std::endl;
	std::cout << "float\t: " << static_cast<float>(c) << std::endl;
	std::cout << "double\t: " << static_cast<double>(c) << std::endl;
}

/*converts input to int*/
void	Converter::convertInt(void) const
{
	long int	li = strtol(this->_input.c_str(), NULL, 10);
	if (li > INT_MAX || li < INT_MIN)
	{
		std::cout << "Value is bigger or smaller then an int!" << std::endl;
		return ;
	}
	int	i = li;
	if (i <= CHAR_MAX && i >= CHAR_MIN)
	{
		if (i >= 32 && i <= 127)
			std::cout << "char\t: " << static_cast<char>(i) << std::endl;
		else
			std::cout << "char\t: Non displayable" << std::endl;
	}
	else
		std::cout << "char\t: impossible" << std::endl;
	std::cout << "int\t: " << i << std::endl;
	std::cout << "float\t: " << static_cast<float>(i);
	if (i < 1000000)
		std::cout << ".0f" << std::endl;
	else
		std::cout << "f" << std::endl;
	std::cout << "double\t: " << static_cast<double>(i);
	if (i < 1000000)
		std::cout << ".0" << std::endl;
	else
		std::cout << std::endl;
}

/*converts input to float*/
void	Converter::convertFloat(void) const
{
	float	f = strtof(this->_input.c_str(), NULL);
	if (f <= CHAR_MAX && f >= CHAR_MIN)
	{
		if (f >= 32 && f <= 127)
			std::cout << "char\t: " << static_cast<char>(f) << std::endl;
		else
			std::cout << "char\t: Non displayable" << std::endl;
	}
	else
		std::cout << "char\t: impossible" << std::endl;
	if (f < INT_MIN || f > INT_MAX)
		std::cout << "int\t: impossible" << std::endl;
	else
		std::cout << "int\t: " << static_cast<int>(f) << std::endl;
	std::cout << "float\t: " << f;
	if (f <= 999999)
		std::cout << ".0f" << std::endl;
	else
		std::cout << "f" << std::endl;
	std::cout << "double\t: " << static_cast<double>(f);
	if (f <= 999999)
		std::cout << ".0";
	std::cout << std::endl;
}

/*converts input to double*/
void	Converter::convertDouble(void) const
{
	double d = strtod(this->_input.c_str(), NULL);
	if (d <= CHAR_MAX && d >= CHAR_MIN)
	{
		if (d >= 32 && d <= 127)
			std::cout << "char\t: " << static_cast<char>(d) << std::endl;
		else
			std::cout << "char\t: Non displayable" << std::endl;
	}
	else
		std::cout << "char\t: impossible" << std::endl;
	if (d < INT_MIN || d > INT_MAX)
		std::cout << "int\t: impossible" << std::endl;
	else
		std::cout << "int\t: " << static_cast<int>(d) << std::endl;
	std::cout << "float\t: " << static_cast<float>(d);
	if (d <= 999999)
		std::cout << ".0f" << std::endl;
	else
		std::cout << "f" << std::endl;
	std::cout << "double\t: " << d;
	if (d <= 999999)
		std::cout << ".0";
	std::cout << std::endl;
}

/*converts input to nan*/
void	Converter::convertNan(void) const
{
	std::cout << "char\t: impossible" << std::endl;
	std::cout << "int\t: impossible" << std::endl;
	if (this->_input == "nan")
	{
		double d = std::numeric_limits<double>::quiet_NaN();
		std::cout << "float\t: " << static_cast<float>(d) << "f" << std::endl;
		std::cout << "double\t: " << d << std::endl;
	}
	else if (this->_input == "nanf")
	{
		float f = std::numeric_limits<float>::quiet_NaN();
		std::cout << "float\t: " << f << "f" << std::endl;
		std::cout << "double\t: " << static_cast<double>(f) << std::endl;
	}
}

/*converts input to inf*/
void	Converter::convertInf(void) const
{
	std::cout << "char\t: impossible" << std::endl;
	std::cout << "int\t: impossible" << std::endl;
	if (!this->_input.compare(1, 4, "inf"))
	{
		double d = std::numeric_limits<double>::infinity();
		if (this->_input.at(0) == '-')
			d = -d;
		std::cout << "float\t: " << static_cast<float>(d) << "f" << std::endl;
		std::cout << "double\t: " << d << std::endl;
	}
	else if (!this->_input.compare(1, 5, "inff"))
	{
		float f = std::numeric_limits<float>::infinity();
		if (this->_input.at(0) == '-')
			f = -f;
		std::cout << "float\t: " << f << "f" << std::endl;
		std::cout << "double\t: " << static_cast<double>(f) << std::endl;
	}
}
