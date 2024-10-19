/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miturk <miturk@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 13:22:07 by miturk            #+#    #+#             */
/*   Updated: 2024/10/19 12:44:54 by miturk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(int num) : _value(num) {
	std::cout << "Default constructor called" << std::endl;
};

Fixed::Fixed(const Fixed &fixed) {
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
};

Fixed &Fixed::operator<<(const Fixed &fixed) {
	std::cout << "Copy assignment operator called" << std::endl;
	_value = fixed.toFloat();
	return *this;
};

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
};

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
};

int Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return _float;	
};

int Fixed::getRawBits

void Fixed::setRawBits(int const raw) {
	std::cout << "setRawBits member function called" << std::endl;
	_float = raw;
};

float Fixed::toFloat(void) const {
	std::cout << _float << std::endl;
	return _float;
}

int	Fixed::toInt(void) const {
	_value = roundf(Fi);
	return (_value);
};