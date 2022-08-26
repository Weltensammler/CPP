//
// Fixed.h
//

#ifndef FIXED_H
#define FIXED_H

#include <ostream>

class Fixed
{
private:
	int					_value;
	static const int	_bits;

public:
	Fixed(void);
	Fixed(const int value);
	Fixed(const float value);
	Fixed(const Fixed &obj);
	~Fixed(void);

	Fixed	&operator=(const Fixed &obj);

	bool	operator<(const Fixed &obj) const;
	bool	operator>(const Fixed &obj) const;
	bool	operator>=(const Fixed &obj) const;
	bool	operator<=(const Fixed &obj) const;
	bool	operator==(const Fixed &obj) const;
	bool	operator!=(const Fixed &obj) const;

	Fixed	operator+(const Fixed &obj);
	Fixed	operator-(const Fixed &obj);
	Fixed	operator*(const Fixed &obj);
	Fixed	operator/(const Fixed &obj);

	Fixed	operator++(); // prefix
	Fixed	operator++(int); // postfix
	Fixed	operator--(); // prefix
	Fixed	operator--(int); // postfix

	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;

	static Fixed		&min(Fixed &value1, Fixed &value2);
	static const Fixed	&min(const Fixed &value1, const Fixed &value2);
	static Fixed		&max(Fixed &value1, Fixed &value2);
	static const Fixed	&max(const Fixed &value1, const Fixed &value2);
};

std::ostream &operator<<(std::ostream &out, const Fixed &obj);

#endif // FIXED_H
