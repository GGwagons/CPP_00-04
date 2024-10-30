/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miturk <miturk@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 15:05:58 by miturk            #+#    #+#             */
/*   Updated: 2024/10/30 11:02:02 by miturk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() : _ideas() {
	std::cout << "Brain constructor called" << std::endl;
}

Brain::Brain(const Brain &copy) {
	std::cout << "Brain copy constructor called" << std::endl;
	for (int i = 0; i < 100; i++) {
		_ideas[i] = copy._ideas[i];
	}
}

Brain &Brain::operator=(const Brain &copy) {
	std::cout << "Brain assignation operator called" << std::endl;
	if (this != &copy) {
		for (int i = 0; i < 100; i++)
			_ideas[i] = copy._ideas[i];
	}
	return *this;
}

Brain::~Brain() {
	std::cout << "Brain destructor called" << std::endl;
}