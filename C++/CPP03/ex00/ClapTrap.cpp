/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miturk <miturk@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 17:32:37 by wagons            #+#    #+#             */
/*   Updated: 2024/10/26 12:49:32 by miturk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("ClapTrap"), _hitpoints(10), _energyPoints(10), _attackDamage(0) {
	std::cout << "ClapTrap default constructor" << std::endl;
}

ClapTrap::ClapTrap(const std::string &name) : _name(name), _hitpoints(10), _energyPoints(10), _attackDamage(0) {
	std::cout << "ClapTrap constructor with name" << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap destructor" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &copy) {
	std::cout << "ClapTrap assignation operator called" << std::endl;
	_name = copy._name;
	_hitpoints = copy._hitpoints;
	_energyPoints = copy._energyPoints;
	_attackDamage = copy._attackDamage;
	return *this;
}

void ClapTrap::setName(std::string name) {
	_name = name;
}

void ClapTrap::setHitpoints(unsigned int hitpoints) {
	_hitpoints = hitpoints;
}

void ClapTrap::setEnergyPoints(unsigned int energyPoints) {
	_energyPoints = energyPoints;
}

void ClapTrap::attack(const std::string &target) {
	if (_energyPoints != 0) {
		_energyPoints -= 1;
		std::cout << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
		std::cout << _name << " has " << _energyPoints << " energy points!" << std::endl;
	}
	else {
		std::cout << _name << " has no energy points!" << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount) {
	std::cout << _name << " takes " << amount << " points of damage!" << std::endl;
	(amount >= _hitpoints) ? _hitpoints = 0 : _hitpoints -= amount;
	std::cout << _name << " has " << _hitpoints << " hitpoints!" << std::endl;
	if (_hitpoints == 0) {
		std::cout << _name << " is dead!" << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (_energyPoints != 0) {
		std::cout << _name << " repaired by " << amount << " points!" << std::endl;
		int heal = _hitpoints + amount;
		setHitpoints(heal);
		_energyPoints -= 1;
		std::cout << _name << "s hitpoint have been increased to " << _hitpoints << " hitpoints" << std::endl;
		std::cout << _name << " has " << _energyPoints << " energy points!" << std::endl;
	}
	else {
		std::cout << _name << " has no energy points!" << std::endl;
		if (_hitpoints == 0) {
			std::cout << _name << " is dead!" << std::endl;
		}
	}
}