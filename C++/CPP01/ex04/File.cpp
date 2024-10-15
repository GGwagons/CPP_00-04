/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   File.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wagons <wagons@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 12:36:42 by miturk            #+#    #+#             */
/*   Updated: 2024/10/15 19:27:22 by wagons           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "File.hpp"
#include <iostream>
#include <string>
#include <fstream>


File::File(std::string fileName) : _fileName(fileName) {};

File::File() : _fileName("") {};

File::~File() {};

void	File::setFileName(std::string fileName) {
	_fileName = fileName;
}

std::string File::getFileName() {
	return _fileName;
}

// void	File::createFile(std::string fileName) {
// 	std::ofstream newFile(fileName.c_str());
// 	// newFile.close();
// }

void	File::readFile() {
	std::string fileName = getFileName();
	std::ifstream file(fileName.c_str());
	if (!file.is_open()) {
		std::cout << "File not found" << std::endl;
		return ;
	}
	std::string line;
	std::ofstream newFile(_fileName + ".replace");
	while (std::getline(file, line)) {
		// createFile(_fileName + "replace.txt");
		// std::cout << line << std::endl;
		std::newFile << line << std::endl;
	}
	file.close();
}