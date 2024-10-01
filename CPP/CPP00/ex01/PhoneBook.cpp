/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miturk <miturk@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 22:49:30 by miturk            #+#    #+#             */
/*   Updated: 2024/10/01 19:09:10 by miturk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : _index(0) {}

void PhoneBook::_number(std::string &input) {
	for (size_t i = 0; input[i]; i++) {
		if (!isdigit(input[i])) {
			std::cout << "Please enter a valid number" << std::endl;
			std::cin >> input;
		}
	}
}

void	PhoneBook::add() {
	std::cout << "Enter the following details: " << std::endl;
	std::string input;
	int i = _index % 8;
	std::cout << "Name: ";
	std::cin >> input;
	if (std::cin.eof())
		return ;
	_contacts[i].setName(input);
	
	std::cout << "Last Name: ";
	std::cin >> input;
	if (std::cin.eof())
		return ;
	_contacts[i].setLastName(input);
	
	std::cout << "Nick Name: ";
	std::cin >> input;
	if (std::cin.eof())
		return ;
	_contacts[i].setNickName(input);
	
	std::cout << "Number: ";
	std::cin >> input;
	if (std::cin.eof())
		return ;
	_number(input);
	_contacts[i].setNum(input);
	
	std::cout << "Darkest Secrets: ";
	std::cin >> input;
	if (std::cin.eof())
		return ;
	_contacts[i].setDarkestSecrets(input);
	
	std::cout << "Contact added successfully" << std::endl;
	_index++;
}

void	PhoneBook::search() {
	std::cout << "–––––––––––––––––––––––––––––––––––––––––––––––––––" << std::endl;
	std::cout << "| Index |  Name  | Lastname | Nickname |  Number  |" << std::endl;
	std::cout << "–––––––––––––––––––––––––––––––––––––––––––––––––––" << std::endl;
	for (int i = 0; i < 8; i++) {
		std::cout << "|" << std::setw(5) << i + 1 << "|";
		_contacts[i].printLine();
		std::cout << "___________________________________________________" << std::endl;
	}
	std::cout << "Enter the index of the contact you want to see" << std::endl;
	int i = 0;
	std::cin >> i;
	if (std::cin.eof())
		return ;
	if (i--, i >= 0 || i <= _index) {
		_contacts[i].printContact();
	}
	else if (i < 0 || i > _index) {
		std::cout << "Please enter a valid index" << std::endl;
		std::cin >> i;
	}
	else
		return ;
}
