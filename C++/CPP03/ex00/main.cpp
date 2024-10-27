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

#include "ClapTrap.hpp"

void testClapTrap(ClapTrap *claptrap, const std::string &target) {
    claptrap->attack(target);
    claptrap->takeDamage(10);
    claptrap->beRepaired(5);
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
    ClapTrap *clap = new ClapTrap("ClapTrap");
    testClapTrap(clap, "Target");
    return 0;
}