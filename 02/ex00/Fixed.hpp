
#ifndef FIXED_H
# define FIXED_H

class Fixed
{
private:
	int pntValue;
	const static int factBits;
public:
	Fixed();
	Fixed(const Fixed &thing);
	~Fixed();
	int getRawBits( void ) const;
	Fixed &operator=(const Fixed &thing);
	void setRawBits( int const raw );
};

#endif // !FIXED_H