/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miturk <miturk@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 12:57:33 by miturk            #+#    #+#             */
/*   Updated: 2024/10/26 12:54:39 by miturk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main() {
	ScavTrap scavtrap("ScavTrap");
	ScavTrap scavtrap2;
	scavtrap2.setName("ScavTrap2");
	scavtrap2.attack("Target");
	scavtrap2.takeDamage(20);
	scavtrap2.beRepaired(80);
	scavtrap2.guardGate();
	std::cout << std::endl;
	std::cout << std::endl;
	scavtrap.attack("Target");
	scavtrap.takeDamage(20);
	scavtrap.beRepaired(60);
	scavtrap.guardGate();
	return 0;
}