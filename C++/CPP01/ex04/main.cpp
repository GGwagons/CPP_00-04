/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wagons <wagons@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 12:00:02 by miturk            #+#    #+#             */
/*   Updated: 2024/10/15 19:18:11 by wagons           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>
#include "File.hpp"

class File;

int main(int argc, char **argv) {
	File file;
	(void)argv;
	if (argc != 4) {
		std::cout << "Wrong number of arguments" << std::endl;
		return 1;
	}
	file.setFileName(argv[1]);
	file.readFile();
	return 0;
}