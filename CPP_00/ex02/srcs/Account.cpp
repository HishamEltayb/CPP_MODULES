/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heltayb <heltayb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 11:06:48 by heltayb           #+#    #+#             */
/*   Updated: 2024/08/25 14:53:35 by heltayb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account( int initial_deposit )
{
	this->_amount = initial_deposit;
	this->_accountIndex = _nbAccounts++;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	_totalAmount += initial_deposit;
	Account::_displayTimestamp();
	std::cout << "index:" <<  this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";" << "created" << std::endl;
}

Account::~Account( void )
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";" << "closed" << std::endl;
}

void	Account::_displayTimestamp( void )
{
	std::cout << "[19920104_091532] ";
}


int	Account::getNbAccounts( void )
{
	return (_nbAccounts);
}
int	Account::getTotalAmount( void )
{
	return (_totalAmount);		
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
	Account::_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ";";
	std::cout << "total:" << _totalAmount << ";";
	std::cout << "deposits:" << _totalNbDeposits << ";";
	std::cout << "withdrawals:" << _totalNbWithdrawals << std::endl;
}


void	Account::makeDeposit( int deposit )
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amount:" << this->_amount << ";";
	_totalNbDeposits++;
	this->_nbDeposits++;
	std::cout << "deposit:" << deposit << ";";
	this->_amount += deposit;
	_totalAmount += deposit;
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "nb_deposits:" << this->_nbDeposits << std::endl;
}
bool	Account::makeWithdrawal( int withdrawal )
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amount:" << this->_amount << ";";
	if (withdrawal < this->_amount)
	{
		_totalNbWithdrawals++;
		this->_nbWithdrawals++;
		std::cout << "withdrawal:" << withdrawal << ";";
		this->_amount -= withdrawal;
		_totalAmount -= withdrawal;
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
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "deposits:" << this->_nbDeposits << ";";
	std::cout << "withdrawals:" << this->_nbWithdrawals << std::endl;	
}