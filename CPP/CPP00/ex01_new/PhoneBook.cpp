/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miturk <miturk@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 20:28:51 by miturk            #+#    #+#             */
/*   Updated: 2024/10/01 15:59:08 by miturk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

void PhoneBook::setContacts(Contact &mCont, int i) {
	_index = i;
	_contacts[_index % 8] = mCont.getContact();
	i++;
}

std::string PhoneBook::getContacts() const {
	return (_contacts[_index % 8]);
}

int PhoneBook::getIndex() const {
	return (_index);
}

void PhoneBook::setIndex(int i){
	i = _index;
}

void PhoneBook::size(Contact &mCont) {
		if (mCont.getName().length() > 9) {
			mCont.setName(mCont.getName().substr(0, 9) + ".|");	
		}
		else {
			mCont.setName(mCont.getName() + "|");
		}
		if (mCont.getLastName().length() > 9) {
			mCont.setLastName (mCont.getLastName().substr(0, 9) + ".|");
		}
		else {
			mCont.setLastName(mCont.getLastName() + "|");
		}
		if (mCont.getNickName().length() > 9) {
			mCont.setNickName(mCont.getNickName().substr(0, 9) + ".|");
		}
		else {
			
			mCont.setNickName(mCont.getNickName() + "|");
		}
		if (mCont.getNum().length() > 9) {
			mCont.setNum(mCont.getNum().substr(0, 9) + ".|");
		}
		else {
			mCont.setNum(mCont.getNum() + "|");
		}
		if (mCont.getDarkestSecrets().length() > 9) {
			mCont.setDarkestSecrets(mCont.getDarkestSecrets().substr(0, 9) + ".|");
		}
		else {
			mCont.setDarkestSecrets(mCont.getDarkestSecrets() + "|");
		}
		setContacts(mCont, _index);
		std::cout << getContacts() << std::endl;
}

void	PhoneBook::search(Contact &mCont) {
	std::cout << "Index |      Name|  Lastname|  Nickname|    Number|    Secret|" << std::endl;
	std::cout << "––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––" << std::endl;
	for (int i = 0; i < 8; i++) {
		std::cout << std::setw(6) << i << "|" << mCont.getContact() << std::endl;
	}
	// std::cout << "Enter the index of the contact you want to see" << std::endl;
	// std::cin >> i;
	// if (i >= 0 || i <= _index) {
	// 	std::cout << "Name: " << mCont.getName() << std::endl;
	// 	std::cout << "Last Name: " << mCont.getLastName() << std::endl;
	// 	std::cout << "Nick Name: " << mCont.getNickName() << std::endl;
	// 	std::cout << "Number: " << mCont.getNum() << std::endl;
	// 	std::cout << "Darkest Secrets: " << mCont.getDarkestSecrets() << std::endl;	
	// }
	// else if (i < 0 || i > _index) {
	// 	std::cout << "Please enter a valid index" << std::endl;
	// 	std::cin >> i;
	// }
	// else
	// 	return ;
}