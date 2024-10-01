/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miturk <miturk@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 21:27:06 by miturk            #+#    #+#             */
/*   Updated: 2024/09/30 22:41:33 by miturk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Contact.hpp"
#include "PhoneBook.hpp"

void	start_print() {
	std::cout << "WELCOME TO THE PHONEBOOK" << std::endl << std::endl;
	std::cout << "\t \"ADD\" \n   save a new contact\n" << std::endl;
	std::cout << "\t\"SEARCH\" \n display specific contact\n" << std::endl;
	std::cout << "\t \"EXIT\" \n  exit the PhoneBook\n" << std::endl;
}

std::string mega(const std::string &str) {
	std::string result;
	for (size_t i = 0; str[i]; i++) {
		result += std::toupper(str[i]);
	}
	return result;
}

void	start_cont(Contact &mCont, PhoneBook &mBook) {
	mCont.fill(mBook);
}

int	main() {
	Contact mCont;
	PhoneBook mBook;
	std::string input;
	start_print();
	while (1) {
		std::cin >> input;
		input = mega(input);
		if (input == "EXIT")
			return (1);
		else if (input == "ADD")
			start_cont(mCont, mBook);
		else if (input == "SEARCH")
			mBook.search(mCont);
	}
	return (0);
}