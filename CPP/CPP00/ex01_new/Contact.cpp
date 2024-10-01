/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miturk <miturk@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 21:19:01 by miturk            #+#    #+#             */
/*   Updated: 2024/10/01 16:26:04 by miturk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

void numbers(std::string &input) {
	for (size_t i = 0; input[i]; i++) {
		if (!isdigit(input[i])) {
			std::cout << "Please enter a valid number" << std::endl;
			std::cin >> input;
		}
	}
}
Contact::Contact() {
	_index = 0;
	_name = "          ";
	_lastName = "          ";
	_nickName = "          ";
	_num = "          ";
	_darkestSecrets = "          ";
}

int Contact::getIndex() const {
	return ((char)_index);
}
std::string Contact::getName() const {
	return (_name);
}
std::string Contact::getLastName() const {
	return (_lastName);
}
std::string Contact::getNickName() const {
	return (_nickName);
}
std::string Contact::getNum() const  {
	return (_num);
}
std::string Contact::getDarkestSecrets() const {
	return (_darkestSecrets);
}

void Contact::setIndex(int i) {
	_index = i;
}

void Contact::setName(std::string name) {
	_name = name;
}

void Contact::setLastName(std::string lastName) {
	_lastName = lastName;
}

void Contact::setNickName(std::string nickName) {
	_nickName = nickName;
}

void Contact::setNum(std::string num) {
	_num = num;
}

void Contact::setDarkestSecrets(std::string darkestSecrets) {
	_darkestSecrets = darkestSecrets;
}

// std::string Contact::getContact() {
// 	return getName() + getLastName() + getNickName() + getNum() + getDarkestSecrets();
// }

void Contact::fill(PhoneBook &mBook) {
	static int	index = 0;
	std::string	input;
	std::cout << "Enter the following details: " << std::endl;
	
	setIndex(index);
	std::cout << "Name: ";
	std::cin >> input;
	setName(input);
	
	std::cout << "Last Name: ";
	std::cin >> input;
	setLastName(input);
	
	std::cout << "Nick Name: ";
	std::cin >> input;
	setNickName(input);
	
	std::cout << "Number: ";
	std::cin >> input;
	numbers(input);
	setNum(input);
	
	std::cout << "Darkest Secrets: ";
	std::cin >> input, setDarkestSecrets(input);
	
	mBook.size(*this);
	// mBook.setContacts(ge, index);
	std::cout << "Contact added successfully" << std::endl;
	// std::cout << mBook.getContacts() << std::endl;
	// mBook.setIndex(index);
	index++;
}