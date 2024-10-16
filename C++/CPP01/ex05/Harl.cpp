/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miturk <miturk@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 14:28:24 by miturk            #+#    #+#             */
/*   Updated: 2024/10/16 20:23:55 by miturk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {
}

Harl::~Harl() {
}


void Harl::debug(void) {
	std::cout << "[DEBUG] I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void Harl::info(void) {
	std::cout << "[INFO] I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning(void) {
	std::cout << "[WARNING] I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
}

void Harl::error(void) {
	std::cout << "[ERROR] This is unacceptable. I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level) {
	std::string levels[5] = {"", "DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*complaints[5])(void) = {NULL, &Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	for (int i = 1; i < 5; i++) {
		if (levels[i] == level) {
			(this->*complaints[i])();
			return ;
		}
		else if (i == 4) {
			std::cout << "Usage: ./harl [DEBUG/INFO/WARNING/ERROR]" << std::endl;
			return ;
		}
	}
}