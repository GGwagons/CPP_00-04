/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miturk <miturk@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 14:32:44 by miturk            #+#    #+#             */
/*   Updated: 2024/10/27 14:58:01 by miturk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("Animal") {
	std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(const std::string &type) : type(type) {
	std::cout << "Animal type constructor called" << std::endl;
}

Animal::Animal(const Animal &copy) {
	std::cout << "Animal copy constructor called" << std::endl;
	*this = copy;
}

Animal &Animal::operator=(const Animal &copy) {
	std::cout << "Animal assignation operator called" << std::endl;
	if (this != &copy)
		this->type = copy.type;
	return *this;
}

std::string Animal::getType() const {
	return this->type;
}

std::string Animal::setType(const std::string &type) {
	this->type = type;
	return this->type;
}

Animal::~Animal() {
	std::cout << "Animal destructor called" << std::endl;
}