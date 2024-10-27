/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miturk <miturk@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 14:32:38 by miturk            #+#    #+#             */
/*   Updated: 2024/10/27 14:55:40 by miturk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal {
	protected:
		std::string type;
	public:
		Animal();
		Animal(const std::string &type);
		Animal(const Animal &copy);
		Animal &operator=(const Animal &copy);
		std::string getType() const;
		std::string setType(const std::string &type);
		virtual ~Animal();
};

#endif