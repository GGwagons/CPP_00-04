/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miturk <miturk@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 20:57:36 by miturk            #+#    #+#             */
/*   Updated: 2024/10/17 10:56:46 by miturk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Harl.hpp"

int main(int argc, char **argv) {
	Harl harl;
	if (argc == 2 || argc == 1) {
		if (argc == 2) {
			harl.complain(argv[1]);
		}
		else {
			harl.complain("DEBUG");
			harl.complain("ERROR");
			harl.complain("WARNING");
			harl.complain("INFO");
			// harl.complain("");
		}
		return 0;
	}
	std::cout << "Usage: ./harl [DEBUG/INFO/WARNING/ERROR]" << std::endl;
	return 1;
	
}