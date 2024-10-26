/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miturk <miturk@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 14:08:03 by miturk            #+#    #+#             */
/*   Updated: 2024/10/26 14:29:09 by miturk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("FragTrap") {
	std::cout << getName() << " default constructor" << std::endl;
	setHitpoints(100);
	setEnergyPoints(100);
	setAttackDamage(30);
}

FragTrap::FragTrap(const std::string name) : ClapTrap(name) {
	std::cout << getName() << " Name constructor called" << std::endl;
	setHitpoints(100);
	setEnergyPoints(100);
	setAttackDamage(30);
}

FragTrap::FragTrap(const FragTrap &copy) {
	std::cout << getName() << " copy constructor called" << std::endl;
	*this = copy;
}

FragTrap &FragTrap::operator=(const FragTrap &copy) {
	std::cout << getName() << " assignation operator called" << std::endl;
	setName(copy.getName());
	setHitpoints(copy.getHitPoints());
	setEnergyPoints(copy.getEnergyPoints());
	return *this;
}

FragTrap::~FragTrap() {
	std::cout << getName() << " destructor" << std::endl;
}

void FragTrap::highFivesGuys() {
	std::cout << getName() << " wants to get a High Five" << std::endl;
}