/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miturk <miturk@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 22:49:30 by miturk            #+#    #+#             */
/*   Updated: 2024/10/03 14:44:25 by miturk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : _index(0) {}

PhoneBook::~PhoneBook() {}

void PhoneBook::_number(std::string &input) {
	for (size_t i = 0; input[i]; i++) {
		if (!isdigit(input[i])) {
			std::cout << "Please enter a valid number" << std::endl;
			std::getline(std::cin, input);
			if (std::cin.eof())
				return ;
		}
	}
}

void	PhoneBook::add() {
	std::cout << "Enter the following details: " << std::endl;
	std::string input;
	int i = _index % 8;
	
	input.clear();
	std::cout << "Name: ";
	std::getline(std::cin, input);
	if (std::cin.eof())
		return ;
	_contacts[i].setName(input);
	
	std::cout << "Last Name: ";
	std::getline(std::cin, input);
	if (std::cin.eof())
		return ;
	_contacts[i].setLastName(input);
	
	std::cout << "Nick Name: ";
	std::getline(std::cin, input);
	if (std::cin.eof())
		return ;
	_contacts[i].setNickName(input);
	
	std::cout << "Number: ";
	std::getline(std::cin, input);
	if (std::cin.eof())
		return ;
	_number(input);
	_contacts[i].setNum(input);
	
	std::cout << "Darkest Secrets: ";
	std::getline(std::cin, input);
	if (std::cin.eof())
		return ;
	_contacts[i].setDarkestSecrets(input);
	
	std::cout << "Contact added successfully" << std::endl;
	_index++;
}

void	PhoneBook::_printCheck(std::string &str) {
	_number(str);
	int i;
	std::stringstream ss(str);
	ss >> i;
	if (ss.fail())
		std::cout << "Conversion fail" << std::endl;
	if (i > 0 && i < 9) {	
		if (i--, i >= 0 && i < 8 && i <= _index) {
			_contacts[i].printContact();
		}
		else {
			std::cout << "Empty contact. Run \"SEARCH\", \"ADD\" or  \"EXIT\""<< std::endl;
		}
	}
	else {
		std::cout << "Run search again and type a valid index" << std::endl;
	}
}

void	PhoneBook::search() {
	std::cout << "–––––––––––––––––––––––––––––––––––––––––––––––––––––––" << std::endl;
	std::cout << "|  Index  |   Name   | Lastname | Nickname |  Number  |" << std::endl;
	std::cout << "–––––––––––––––––––––––––––––––––––––––––––––––––––––––" << std::endl;
	for (int i = 0; i < 8; i++) {
		std::cout << "|" << std::setw(9) << i + 1 << "|";
		_contacts[i].printLine();
		std::cout << "_______________________________________________________" << std::endl;
	}
	std::cout << "Enter the index of the contact you want to see" << std::endl;
	std::string str;
	std::cin >> str;
	if (std::cin.eof())
		return ;
	_printCheck(str);
}