/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miturk <miturk@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 16:08:20 by miturk            #+#    #+#             */
/*   Updated: 2024/10/14 13:15:36 by miturk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) : _name(name) {
	std::cout << _name << " created" << std::endl;
}

Zombie::~Zombie() {
	std::cout << _name << " deleted" << std::endl;
}

void	Zombie::announce() {
	std::cout << _name << ": Braiiiiiiinnnzzz" << std::endl;
}

void Zombie::setName(std::string name) {
	_name = name;
}
