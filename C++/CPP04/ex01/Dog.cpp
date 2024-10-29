/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miturk <miturk@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 14:35:21 by miturk            #+#    #+#             */
/*   Updated: 2024/10/29 15:41:10 by miturk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : _brain(new Brain), Animal("Dog") {
	std::cout << "Dog constructor called" << std::endl;
	_type = "Dog";
}

Dog::Dog(const std::string &type) : Animal(type) {
	std::cout << "Dog type constructor called" << std::endl;
}

Dog::Dog(const Dog &copy) : Animal("Dog") {
	std::cout << "Dog copy constructor called" << std::endl;
	*this = copy;
}

Dog &Dog::operator=(const Dog &copy) {
	std::cout << "Dog assignation operator called" << std::endl;
	if (this != &copy)
		_type = copy._type;
	return *this;
}

Dog::~Dog() {
	std::cout << "Dog destructor called" << std::endl;
	delete *brain;
}

void Dog::makeSound() const {
	if (this->_type == "Dog")
		std::cout << "Woof Woof" << std::endl;
	else
		std::cout << "Dog sound" << std::endl;
}
