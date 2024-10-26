/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miturk <miturk@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 12:57:33 by miturk            #+#    #+#             */
/*   Updated: 2024/10/26 14:27:00 by miturk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main() {
	FragTrap fragtrap("FragTrap");
	FragTrap fragtrap2;
	fragtrap2.setName("FragTrap2");
	fragtrap2.attack("Target1");
	fragtrap2.takeDamage(20);
	fragtrap2.beRepaired(80);
	fragtrap2.highFivesGuys();
	std::cout << std::endl;
	std::cout << std::endl;
	fragtrap.attack("Target2");
	fragtrap.takeDamage(20);
	fragtrap.beRepaired(60);
	fragtrap.highFivesGuys();
	return 0;
}