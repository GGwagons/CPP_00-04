/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miturk <miturk@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 13:22:45 by miturk            #+#    #+#             */
/*   Updated: 2024/10/19 12:43:39 by miturk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
#include <sstream>

class Fixed {
	private:
		int					_value;
		float				_float;
		static const int	_fractionalBits = 8;
		static const float	_fBits = 8;
	public:
		Fixed(int num);
		Fixed(const int num);
		Fixed(const Fixed &fixed);
		// Fixed	&operator=(const Fixed &fixed);
		Fixed	&operator<<(const Fixed &fixed);
		~Fixed();
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat (void) const;
		int		toInt(void) const;
};

#endif