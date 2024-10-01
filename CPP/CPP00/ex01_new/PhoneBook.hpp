/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miturk <miturk@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 20:28:45 by miturk            #+#    #+#             */
/*   Updated: 2024/10/01 16:02:28 by miturk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>
#include "Contact.hpp"
class Contact;

class	PhoneBook {
	private:
			int			_index;
			Contact	_contacts[8];
	public:
			PhoneBook();
			int			getIndex() const;
			void		setIndex(int i);
			void		size(Contact &mCont);
			void		search(Contact &mCont);
			void		setContacts(Contact &mCont, int i);
			std::string	getContacts() const;
};
#endif