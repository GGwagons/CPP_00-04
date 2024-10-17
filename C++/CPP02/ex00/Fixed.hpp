/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miturk <miturk@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 13:22:45 by miturk            #+#    #+#             */
/*   Updated: 2024/10/17 14:16:33 by miturk           ###   ########.fr       */
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
		int _value;
		static const int _fractionalBits = 8;
	public:
		Fixed();
		Fixed(Fixed const &copy);
		Fixed  &operator=(const Fixed &copy);
		~Fixed();
		int getRawBits(void) const;
		void setRawBits(int const raw);
};

#endif