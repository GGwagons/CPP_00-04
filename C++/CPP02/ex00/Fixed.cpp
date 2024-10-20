/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wagons <wagons@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 13:22:07 by miturk            #+#    #+#             */
/*   Updated: 2024/10/19 21:15:24 by wagons           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _value(0) {
	std::cout << "Default constructor called" << std::endl;
};

Fixed::Fixed(const Fixed &fixed) {
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
};

Fixed &Fixed::operator=(const Fixed &fixed) {
	std::cout << "Copy assignment operator called" << std::endl;
	_value = fixed.getRawBits();
	return *this;
};

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
};

int Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return _value;	
};

void Fixed::setRawBits(int const raw) {
	std::cout << "setRawBits member function called" << std::endl;
	_value = raw;
};