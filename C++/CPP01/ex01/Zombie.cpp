/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miturk <miturk@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 09:41:36 by miturk            #+#    #+#             */
/*   Updated: 2024/10/14 14:55:13 by miturk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name, int i) : _name(name) {
	std::cout << this->_name << i << " is born" << std::endl;
};

Zombie::~Zombie() {
	static int i = 0;
	std::cout << _name << " " << i << " " << this->_name << " is dead" << std::endl;
	i++;
};

void Zombie::setName(std::string name) {
	this->_name = name;
}

void Zombie::announce(int i) {
	std::cout << this->_name << " " << i << " BraiiiiiiinnnzzzZ..." << std::endl;
}
