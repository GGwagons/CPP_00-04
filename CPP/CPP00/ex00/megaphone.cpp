/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miturk <miturk@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 20:42:37 by miturk            #+#    #+#             */
/*   Updated: 2024/09/26 22:23:48 by miturk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "megaphone.hpp"

std::string MegaPhone::mega(std::string str) {
	std::string result;
	for (size_t i = 0; str[i]; i++){
		result += std::toupper(str[i]);
	}
	return result;
}

int main(int argc,  char **argv) {
	MegaPhone mega;
	if (argc < 2) {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return 1;
	}
	for (int i = 1; argv[i] != NULL; i++){
		std::string str = argv[i];
		std::cout << mega.mega(str);
	}
	std::cout << std::endl;
	return 0;
}
