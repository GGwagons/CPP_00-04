/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   File.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miturk <miturk@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 12:36:42 by miturk            #+#    #+#             */
/*   Updated: 2024/10/15 18:53:05 by miturk           ###   ########.fr       */
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

void	File::readFile() {
	std::string fileName = getFileName();
	std::ifstream file(fileName.c_str());
	if (!file.is_open()) {
		std::cout << "File not found" << std::endl;
		return ;
	}
	std::string line;
	while (std::getline(file, line)) {
		std::cout << line << std::endl;
	}
	file.close();
}