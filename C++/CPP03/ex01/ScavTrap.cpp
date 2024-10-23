/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miturk <miturk@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 11:53:49 by miturk            #+#    #+#             */
/*   Updated: 2024/10/23 10:56:31 by miturk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap(){
	std::cout << "ScavTrap default constructor" << std::endl;
}

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name) {
	setHitpoints(100);
	setEnergyPoints(50);
	setAttackDamage(20);
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap destructor" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy) {
	std::cout << "ScavTrap copy constructor" << std::endl;
	*this = copy;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &copy) {
	std::cout << "ScavTrap assignation operator" << std::endl;
	setName(copy.getName());
	setHitpoints(copy.getHitpoints());
	setEnergyPoints(copy.getEnergyPoints());
	setAttackDamage(copy.getAttackDamage());
	return *this;
}

void ScavTrap::setHitpoints(unsigned int hitpoints) {
	ClapTrap::setHitpoints(hitpoints);
}

void ScavTrap::setEnergyPoints(unsigned int energyPoints) {
	ClapTrap::setEnergyPoints(energyPoints);
}

void ScavTrap::setAttackDamage(unsigned int attackDamage) {
	ClapTrap::setAttackDamage(attackDamage);
}

void ScavTrap::takeDamage(unsigned int amount) {
	std::cout << "ScavTrap " << getName() << " take " << amount << " points of damage!" << std::endl;
}

void ScavTrap::beRepaired(unsigned int amount) {
	std::cout << "ScavTrap " << getName() << " repaired " << amount << " points of damage!" << std::endl;
}

void ScavTrap::setName(std::string name) {
	ClapTrap::setName(name);
}

void ScavTrap::guardGate() {
	std::cout << "ScavTrap " << getName() << " have enterred in Gate keeper mode" << std::endl;
}

void ScavTrap::attack(const std::string &target) {
	std::cout << "ScavTrap " << getName() << " attack " << target << ", causing " << getAttackDamage() << " points of damage!" << std::endl;
}