/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miturk <miturk@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 09:41:59 by miturk            #+#    #+#             */
/*   Updated: 2024/10/06 09:49:27 by miturk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>
#include <iostream>
#include <iomanip>
#include <sstream>

class Zombie {
	private:
			std::string _name;
	public:
			Zombie();
			~Zombie();
			void announce(void);
			void setName(std::string name);
			Zombie *zombieHorde( int N, std::string name );
			Zombie *newZombie( std::string name );
			
};

#endif