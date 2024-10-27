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

#include "FragTrap.hpp"

void testFragTrap(FragTrap &frag, const std::string &target) {
    frag.attack(target);
    frag.takeDamage(100);
    frag.beRepaired(80);
    frag.highFivesGuys();
    std::cout << std::endl;
}

void testClapTrap(ClapTrap *claptrap, const std::string &target) {
    claptrap->attack(target);
    claptrap->takeDamage(100);
    claptrap->beRepaired(20);
    std::cout << std::endl;
    delete claptrap;
}

int main() {
    FragTrap frag("FragTrap");
    testFragTrap(frag, "Target_1");

    ClapTrap *clap = new FragTrap("FragTrap");
    testClapTrap(clap, "Target_2");
	std::cout << std::endl;

    FragTrap frag1;
    ClapTrap *clap1 = new FragTrap();
    testClapTrap(clap1, "Target_3");

    return 0;
}