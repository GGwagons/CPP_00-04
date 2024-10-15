/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miturk <miturk@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 19:40:19 by miturk            #+#    #+#             */
/*   Updated: 2024/10/15 13:54:25 by miturk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(std::string name) : _name(name), _weapon(NULL) {
	std::cout << _name << " was created" << std::endl;
};


HumanB::~HumanB() {
	std::cout << _name << " was destroyed" << std::endl;
};

void HumanB::setWeapon(Weapon &weapon) {
	_weapon = &weapon;
};

void HumanB::attack() {
	if (_weapon)
		std::cout << _name << " attacks with his " << _weapon->getType() << std::endl;
	else
		std::cout << _name << " attacks with his bare hands" << std::endl;
};
