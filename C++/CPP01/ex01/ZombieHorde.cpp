/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miturk <miturk@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 10:28:08 by miturk            #+#    #+#             */
/*   Updated: 2024/10/06 10:34:26 by miturk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *Zombie::zombieHorde( int N, std::string name ) {
	Zombie *zombie = new Zombie[N];
	for (int i = 0; i < N; i++) {
		zombie[i].setName(name);
		zombie[i].announce();
		std::cout << i << " BraiiiiiiinnnzzzZ" <<std::endl;
	}
	return (zombie);
}