/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wagons <wagons@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 12:57:33 by miturk            #+#    #+#             */
/*   Updated: 2024/10/21 23:16:30 by wagons           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(){
	ClapTrap claptrap("Claptrap");
	claptrap.attack("target");
	claptrap.takeDamage(10);
	claptrap.beRepaired(5);

	ClapTrap claptrap2;
	claptrap2.setName("Claptrap2");
	claptrap2.attack("target");
	claptrap2.takeDamage(10);
	claptrap2.beRepaired(5);

	return 0;
}