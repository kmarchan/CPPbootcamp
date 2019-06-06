#include "Fixed.hpp"

Fixed::Fixed()
{
	this->pntValue = 0;
}

Fixed::Fixed(const Fixed &thing)
{
	*this = thing;
}

Fixed::~Fixed()
{
}
