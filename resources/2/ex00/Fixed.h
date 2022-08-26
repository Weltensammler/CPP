//
// Fixed.h
//

#ifndef FIXED_H
#define FIXED_H

class Fixed
{
private:
	int					value;
	static const int	bits;

public:
	Fixed(void);
	Fixed(const Fixed &obj);
	~Fixed(void);
	Fixed	&operator=(const Fixed &obj);
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
};

#endif // FIXED_H
