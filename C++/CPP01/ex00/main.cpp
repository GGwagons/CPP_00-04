/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miturk <miturk@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 16:40:31 by miturk            #+#    #+#             */
/*   Updated: 2024/10/14 18:41:14 by miturk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() {
	randomChump("RandomChump");
	randomChump("RandomChump 0");
	randomChump("RandomChump 1");
	randomChump("RandomChump 2");
	Zombie *zombie = newZombie("Zombie");
	Zombie *zombie0 = newZombie("Zombie 0");
	Zombie *zombie1 = newZombie("Zombie 1");
	Zombie *zombie2 = NULL;
	zombie2 = newZombie("Zombie2");
	delete zombie;
	delete zombie0;
	delete zombie1;
	delete zombie2;
	return (0);
}