#include "iostream"
#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->pntValue = 0;
}

Fixed::Fixed(const Fixed &thing)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = thing;
}

Fixed::~Fixed()
{
}

int Fixed::getRawBits( void ) const {
	std::cout << "getRawBits member function called" << std::endl;
	return this->pntValue;
}

Fixed &Fixed::operator=(const Fixed &thing) {
	std::cout << "Assignation operator called" << std::endl;
	this->pntValue = thing.pntValue;
	return *this;
}

void Fixed::setRawBits( int const raw ) {
	this->pntValue = raw;
}