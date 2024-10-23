/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miturk <miturk@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 17:32:37 by wagons            #+#    #+#             */
/*   Updated: 2024/10/23 10:55:01 by miturk           ###   ########.fr       */
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

void ClapTrap::setName(std::string name) {
	_name = name;
}

std::string ClapTrap::getName() const {
	return _name;
}

unsigned int ClapTrap::getHitpoints() const {
	return _hitpoints;
}

unsigned int ClapTrap::getEnergyPoints() const {
	return _energyPoints;
}

unsigned int ClapTrap::getAttackDamage() const {
	return _attackDamage;
}

void ClapTrap::setHitpoints(unsigned int hitpoints) {
	_hitpoints = hitpoints;
}

void ClapTrap::setAttackDamage(unsigned int attackDamage) {
	_attackDamage = attackDamage;
}

void ClapTrap::setEnergyPoints(unsigned int energyPoints) {
	_energyPoints = energyPoints;
}

void ClapTrap::attack(const std::string &target) {
	std::cout << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	std::cout << _name << " takes " << amount << " points of damage!" << std::endl;
	(amount >= _hitpoints) ? _hitpoints = 0 : _hitpoints -= amount;
	std::cout << _name << " takes " << _attackDamage << " points of damage!" << std::endl;
	std::cout << _name << " has " << _hitpoints << " hitpoints!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	std::cout << _name << " repaired by " << amount << " points!" << std::endl;
	int heal = _hitpoints + amount;
	setHitpoints(heal);
	std::cout << _name << "s hitrpoint have been increased to " << _hitpoints << " hitpoints" << std::endl;
}