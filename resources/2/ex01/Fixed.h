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

	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;
};

std::ostream &operator<<(std::ostream &out, const Fixed &obj);

#endif // FIXED_H
