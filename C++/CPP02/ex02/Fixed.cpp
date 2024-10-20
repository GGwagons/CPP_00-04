/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wagons <wagons@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 13:22:07 by miturk            #+#    #+#             */
/*   Updated: 2024/10/20 00:16:31 by wagons           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _value(0) {
	std::cout << "Default constructor called" << std::endl;
};

Fixed::Fixed(const float par) : _value(roundf(par *(1 << _fractionalBits))) {
	std::cout << "Float constructor called" << std::endl;
};

Fixed::Fixed(const int num) : _value(num){
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixed) {
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
};

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
};

Fixed &Fixed::operator=(const Fixed &fixed) {
	std::cout << "Copy assignment operator called" << std::endl;
	_value = fixed.getRawBits();
	return *this;
};

int Fixed::getRawBits(void) const {
	return (_value);	
};

void Fixed::setRawBits(int const raw) {
	_value = raw;
};

float Fixed::toFloat(void) const {
	return static_cast<float>(_value) / (1 << _fractionalBits);
};

int Fixed::toInt(void) const {
	return _value << _fractionalBits;
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed) {
    out << fixed.toFloat();
    return out;
};

