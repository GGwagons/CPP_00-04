/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miturk <miturk@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 12:57:33 by miturk            #+#    #+#             */
/*   Updated: 2024/10/22 11:37:04 by miturk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(){
	ClapTrap claptrap("ClapTrap");
	claptrap.attack("target");
	claptrap.takeDamage(10);
	claptrap.beRepaired(5);
	std::cout << std::endl;
	std::cout << std::endl;
	ClapTrap claptrap2;
	claptrap2.attack("target");
	claptrap2.takeDamage(10);
	claptrap2.beRepaired(5);

	return 0;
}