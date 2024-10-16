/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miturk <miturk@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 18:11:03 by miturk            #+#    #+#             */
/*   Updated: 2024/10/16 18:31:16 by miturk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv) {
	if (argc != 2) {
		std::cout << "Usage: ./harl [DEBUG/INFO/WARNING/ERROR]" << std::endl;
		return 1;
	}
	Harl harl;
	harl.complain(argv[1]);
	return 0;
}