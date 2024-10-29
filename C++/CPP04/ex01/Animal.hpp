/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miturk <miturk@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 14:32:38 by miturk            #+#    #+#             */
/*   Updated: 2024/10/29 11:58:03 by miturk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal {
	protected:
		std::string _type;
	public:
		Animal();
		Animal(const std::string &type);
		Animal(const Animal &copy);
		Animal &operator=(const Animal &copy);
		virtual std::string getType() const;
		virtual void setType(const std::string &type);
		virtual void makeSound() const;
		virtual ~Animal();
};

#endif