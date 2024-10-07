/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miturk <miturk@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 16:08:20 by miturk            #+#    #+#             */
/*   Updated: 2024/10/06 10:05:43 by miturk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() {};

Zombie::~Zombie() {};

void	Zombie::announce() {
	std::cout << _name << ": Braiiiiiiinnnzzz" << std::endl;
}

void Zombie::setName(std::string name) {
	_name = name;
}