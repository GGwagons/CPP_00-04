/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miturk <miturk@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 14:46:16 by miturk            #+#    #+#             */
/*   Updated: 2024/10/03 15:45:51 by miturk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <chrono>

Account::Account(int initial_deposti) {
	
}

Account::Account() {
	_accountIndex = 0;
	_amount = 0;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
}

Account::~Account() {}

void	Account::_displayTimestamp() {
	std::chrono::hours;
}

int Account::getNbAccounts() {
	return (_nbAccounts);
}

int Account::getTotalAmount() {
	return (_totalAmount);
}

int	Account::getNbDeposits() {
	return (Account::_totalNbDeposits);
}

// int Account::getNbWithdrawals() {
// 	return (_nbWithdrawals);
// }

int Account::getTotalAmount() {
	return (Account::_totalAmount);
}

void	Account::displayAccountsInfos() {
	
}

void	Account::makeDeposit(int deposit) {
	
}

bool	Account::makeWithdrawal(int withdrawal) {
	return (true);
}

void	Account::displayStatus () const {
	
}