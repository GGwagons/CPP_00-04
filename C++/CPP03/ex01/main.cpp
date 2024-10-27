/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miturk <miturk@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 12:57:33 by miturk            #+#    #+#             */
/*   Updated: 2024/10/27 13:42:33 by miturk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

void testScavTrap(ScavTrap &scavtrap, const std::string &target) {
    scavtrap.attack(target);
    scavtrap.takeDamage(20);
    scavtrap.beRepaired(80);
    scavtrap.guardGate();
    std::cout << std::endl;
}

void testClapTrap(ClapTrap *claptrap, const std::string &target) {
    claptrap->attack(target);
    claptrap->takeDamage(50);
    claptrap->beRepaired(20);
    std::cout << std::endl;
    delete claptrap;
}

int main() {
	ClapTrap claptrap("ClapTrap");
	claptrap.attack("Target");
	claptrap.takeDamage(10);
	claptrap.beRepaired(5);
	std::cout << std::endl;
	std::cout << std::endl;
    ScavTrap scavtrap("ScavTrap");
    testScavTrap(scavtrap, "Target");

    ClapTrap *clap = new ScavTrap("ScavTrap");
    testClapTrap(clap, "Target");

    ScavTrap scav;
    ClapTrap *clap1 = new ScavTrap();
    testClapTrap(clap1, "Target");
    scav.guardGate();

    return 0;
}