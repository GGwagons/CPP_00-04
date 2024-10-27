/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miturk <miturk@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 17:32:37 by wagons            #+#    #+#             */
/*   Updated: 2024/10/27 13:41:49 by miturk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("ClapTrap"), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
	std::cout << "ClapTrap default constructor" << std::endl;
}

ClapTrap::ClapTrap(const std::string &name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
	std::cout << "ClapTrap constructor with name" << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap destructor" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &copy) {
	std::cout << "ClapTrap assignation operator called" << std::endl;
	if (this == &copy)
		return *this;
	_name = copy._name;
	_hitPoints = copy._hitPoints;
	_energyPoints = copy._energyPoints;
	_attackDamage = copy._attackDamage;
	return *this;
}

ClapTrap::ClapTrap(const ClapTrap &copy) {
	std::cout << "ClapTrap copy constructor called" << std::endl;
	*this = copy;
}

void ClapTrap::attack(const std::string &target) {
	if (_energyPoints != 0) {
		_energyPoints -= 1;
		std::cout << _name << " attacks " << Target << ", causing " << _attackDamage << " points of damage!" << std::endl;
		std::cout << _name << " has " << _energyPoints << " energy points!" << std::endl;
	}
	else {
		std::cout << _name << " has no energy points!" << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount) {
	std::cout << _name << " takes " << amount << " points of damage!" << std::endl;
	(amount >= _hitPoints) ? _hitPoints = 0 : _hitPoints -= amount;
	std::cout << _name << " has " << _hitPoints << " hitpoints!" << std::endl;
	if (_hitPoints == 0) {
		std::cout << _name << " is dead!" << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (_energyPoints != 0) {
		std::cout << _name << " repaired by " << amount << " points!" << std::endl;
		_hitPoints += amount;
		_energyPoints -= 1;
		std::cout << _name << "s hitpoint have been increased to " << _hitPoints << " hitpoints" << std::endl;
		std::cout << _name << " has " << _energyPoints << " energy points!" << std::endl;
	}
	else {
		std::cout << _name << " has no energy points!" << std::endl;
		if (_hitPoints == 0) {
			std::cout << _name << " is dead!" << std::endl;
		}
	}
}