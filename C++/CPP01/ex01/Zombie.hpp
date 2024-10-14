/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miturk <miturk@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 09:41:59 by miturk            #+#    #+#             */
/*   Updated: 2024/10/14 14:53:43 by miturk           ###   ########.fr       */
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
			Zombie *_zombie;
			std::string _name;
			int _i;
	public:
			Zombie(std::string name, int i);
			~Zombie();
			void announce(int i);
			void setName(std::string name);
			Zombie *zombieHorde( int N, std::string name );
			
};

#endif