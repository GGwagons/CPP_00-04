/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miturk <miturk@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 16:40:31 by miturk            #+#    #+#             */
/*   Updated: 2024/10/14 13:12:31 by miturk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() {
	Zombie *zombie = new Zombie("Zombie");
	zombie->setName("Zombie");
	zombie->announce();
	delete zombie;
	zombie = new Zombie("RandomChump");
	zombie->randomChump("RandomChump");
	delete zombie;
	zombie = zombie->newZombie("NewZombie"); //new Zombie("NewZombie");
	delete zombie;
	return (0);
}