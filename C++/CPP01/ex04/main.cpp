/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miturk <miturk@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 12:00:02 by miturk            #+#    #+#             */
/*   Updated: 2024/10/15 13:47:24 by miturk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "File.hpp"

class File;

int main(int argc, char **argv) {
	(void)argv;
	if (argc != 4) {
		std::cout << "Wrong number of arguments" << std::endl;
		return 1;
	}
	File File(argv[1]);
	File.setFileName(argv[1]);
	std:: cout << "File name: " << File.getFileName() << std::endl;
	return 0;
	
}