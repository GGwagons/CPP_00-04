/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miturk <miturk@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 11:53:49 by miturk            #+#    #+#             */
/*   Updated: 2024/10/26 13:18:20 by miturk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("ScavTrap") {
	std::cout << getName() << " default constructor" << std::endl;
	setHitpoints(100);
	setEnergyPoints(50);
	setAttackDamage(20);
}

ScavTrap::ScavTrap(const std::string name) : ClapTrap(name) {
	std::cout << getName() << " Name constructor called" << std::endl;
	setHitpoints(100);
	setEnergyPoints(50);
	setAttackDamage(20);
}

ScavTrap::ScavTrap(const ScavTrap &copy) {
	std::cout << getName() << "copy constructor called" << std::endl;
	*this = copy;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &copy) {
	std::cout << getName() << "assignation operator called" << std::endl;
	setName(copy.getName());
	setHitpoints(copy.getHitPoints());
	setEnergyPoints(copy.getEnergyPoints());
	return *this;
}
ScavTrap::~ScavTrap() {
	std::cout << getName() << " destructor" << std::endl;
}

void ScavTrap::attack(const std::string &target) {
	std::cout << "ScavTrap " << getName() << " attack " << target << ", causing " << getAttackDamage() << " points of damage!" << std::endl;
}

void ScavTrap::guardGate() {
	std::cout << "ScavTrap " << getName() << " have entered in Gate keeper mode" << std::endl;
}