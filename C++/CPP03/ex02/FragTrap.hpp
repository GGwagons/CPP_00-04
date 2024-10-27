/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miturk <miturk@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 14:08:20 by miturk            #+#    #+#             */
/*   Updated: 2024/10/27 12:21:07 by miturk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

class FragTrap : public ClapTrap {
	public:
		FragTrap();
		FragTrap(const std::string name);
		FragTrap(const FragTrap &copy);
		FragTrap &operator=(const FragTrap &copy);
		virtual ~FragTrap();
		void highFivesGuys();
		
};

#endif