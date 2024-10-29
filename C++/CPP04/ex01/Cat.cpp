/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miturk <miturk@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 14:36:53 by miturk            #+#    #+#             */
/*   Updated: 2024/10/29 15:40:12 by miturk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : _brain(new Brain), Animal("Cat") {
	std::cout << "Cat constructor called" << std::endl;
	_type = "Cat";
}

Cat::Cat(const std::string &type) : Animal(type) {
	std::cout << "Cat type constructor called" << std::endl;
}

Cat::Cat(const Cat &copy) : Animal("Cat") {
	std::cout << "Cat copy constructor called" << std::endl;
	*this = copy;
}

Cat &Cat::operator=(const Cat &copy) {
	std::cout << "Cat assignation operator called" << std::endl;
	if (this != &copy)
		_type = copy._type;
	return *this;
}

Cat::~Cat() {
	std::cout << "Cat destructor called" << std::endl;
	delete _brain;
}

void Cat::makeSound() const {
	if (this->_type == "Cat")
		std::cout << "Meow Meow" << std::endl;
	else
		std::cout << "Cat sound" << std::endl;
}