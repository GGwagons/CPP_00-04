/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wagons <wagons@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 13:22:45 by miturk            #+#    #+#             */
/*   Updated: 2024/10/20 00:17:48 by wagons           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
#include <sstream>
#include <fstream>

class Fixed {
	private:
		int _value;
		static const int _fractionalBits = 8;
	public:
		// Constructors and destructor
		Fixed();
		Fixed(const int par);
		Fixed(const float num);
		Fixed(const Fixed &fixed);
		~Fixed();

		// Member functions
		int		getRawBits(void) const;
		int		toInt(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		
};
std::ostream &operator<<(std::ostream &out, const Fixed &fixed);


#endif




// Assignment operators
		// Fixed	&operator=(const Fixed &fixed);
		// Fixed	operator+(const Fixed &fixed) const;
		// Fixed	operator-(const Fixed &fixed) const;
		// Fixed	operator*(const Fixed &fixed) const;
		// Fixed	operator/(const Fixed &fixed) const;
		// 
		// Increment and decrement operators
		// Fixed	&operator++(void);
		// Fixed	operator++(int);
		// Fixed	&operator--(void);
		// Fixed	operator--(int);
		// 
		// Comparison operators
		// bool	operator>(const Fixed &fixed) const;
		// bool	operator<(const Fixed &fixed) const;
		// bool	operator>=(const Fixed &fixed) const;
		// bool	operator<=(const Fixed &fixed) const;
		// bool	operator==(const Fixed &fixed) const;
		// bool	operator!=(const Fixed &fixed) const;
		// 
		// Min and Max functions
		// static Fixed	&min(Fixed &a, Fixed &b);
		// static Fixed	&max(Fixed &a, Fixed &b);
		// static const Fixed	&min(const Fixed &a, const Fixed &b);
		// static const Fixed	&max(const Fixed &a, const Fixed &b);