/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miturk <miturk@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 10:28:08 by miturk            #+#    #+#             */
/*   Updated: 2024/10/14 14:53:48 by miturk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *Zombie::zombieHorde( int N, std::string name ) {
	for (int i = 0; i < N; i++) {
		Zombie *zombie = new Zombie(name, i);
		zombie->setName(name);
		zombie->announce(i);
		delete zombie;
	}
	return (NULL);
}