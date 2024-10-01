/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miturk <miturk@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 21:19:16 by miturk            #+#    #+#             */
/*   Updated: 2024/10/01 16:04:57 by miturk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>
#include "PhoneBook.hpp"
class PhoneBook;

class	Contact {
	private:
			int _index;
			std::string _name;
			std::string _lastName;
			std::string _nickName;
			std::string _num;
			std::string _darkestSecrets;
	public:
			Contact();
			void fill(PhoneBook &mBook);
			int getIndex() const;
			std::string getName() const;
			std::string getLastName() const;
			std::string getNickName() const;
			std::string getNum() const;
			std::string getDarkestSecrets() const;
			void setIndex(int i);
			void setName(std::string name);
			void setLastName(std::string lastName);
			void setNickName(std::string nickName);
			void setNum(std::string num);
			void setDarkestSecrets(std::string darkestSecrets);
			std::string getContact();
};
#endif