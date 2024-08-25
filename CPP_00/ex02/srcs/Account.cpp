/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heltayb <heltayb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 11:06:48 by heltayb           #+#    #+#             */
/*   Updated: 2024/08/25 13:11:25 by heltayb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>

static int	_nbAccounts;
static int	_totalAmount;
static int	_totalNbDeposits;
static int	_totalNbWithdrawals;

Account::Account( int initial_deposit )
{
	this->_amount = initial_deposit;
	this->_accountIndex = _nbAccounts++;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	_totalAmount += initial_deposit;
	std::cout << "[19920104_091532] index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";" << "created" << std::endl;
}

Account::~Account( void )
{
	std::cout << "[19920104_091532] index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";" << "closed" << std::endl;
}

int	Account::getNbAccounts( void )
{
	return (0);
}
int	Account::getTotalAmount( void )
{
	return (0);		
}
int	Account::getNbDeposits( void )
{
	return (_totalNbDeposits);	
}
int	Account::getNbWithdrawals( void )
{
	return (_totalNbWithdrawals);	
}
void	Account::displayAccountsInfos( void )
{
	std::cout << "[19920104_091532] accounts:" << _nbAccounts << ";";
	std::cout << "total:" << _totalAmount << ";";
	std::cout << "deposits:" << _totalNbDeposits << ";";
	std::cout << "withdrawals:" << _totalNbWithdrawals << ";" << std::endl;
	

	
}


void	Account::makeDeposit( int deposit )
{
	std::cout << "[19920104_091532] index:" << this->_accountIndex << ";";
	std::cout << "p_amount:" << this->_amount << ";";
	_totalNbDeposits++;
	this->_nbDeposits++;
	std::cout << "deposits:" << deposit << ";";
	this->_amount += deposit;
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "nb_deposits:" << this->_nbDeposits << std::endl;

}
bool	Account::makeWithdrawal( int withdrawal )
{
	std::cout << "[19920104_091532] index:" << this->_accountIndex << ";";
	std::cout << "p_amount:" << this->_amount << ";";
	if (withdrawal < this->_amount)
	{
		_totalNbWithdrawals++;
		this->_nbWithdrawals++;
		std::cout << "withdrawal:" << withdrawal << ";";
		this->_amount -= withdrawal;
		std::cout << "amount:" << this->_amount << ";";
		std::cout << "nb_withdrawals:" << this->_nbWithdrawals << std::endl;
	}
	else
	{
		std::cout << "withdrawal:refused" << std::endl;
		return (false);
	}
	return (true);
}
int		Account::checkAmount( void ) const
{
	return (0);
}
void	Account::displayStatus( void ) const
{
	std::cout << "[19920104_091532] index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "deposits:" << this->_nbDeposits << ";";
	std::cout << "withdrawals:" << this->_nbWithdrawals << ";" << std::endl;	
}