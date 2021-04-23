#include "Account.class.hpp"
#include <iostream>
#include <string>

Account::Account(int initial_deposit)
{
	this->_amount = initial_deposit;
	this->_accountIndex = _nbAccounts;
	this->_nbWithdrawals = 0;
	this->_nbDeposits = 0;
	Account::_totalAmount += _amount;
	Account::_displayTimestamp();
	std::cout << "index:";
	std::cout << this->_accountIndex;
	std::cout << ";amount:" << this->_amount;
	std::cout << ";created\n";
	Account::_nbAccounts++;
}

Account::~Account(void)
{
	Account::_displayTimestamp();
	std::cout << "index:";
	std::cout << this->_accountIndex;
	std::cout << ";amount:" << this->_amount;
	std::cout << ";closed\n";
}

int	Account::getNbAccounts(void)
{
	return _nbAccounts;
}

int	Account::getTotalAmount(void)
{
	return _totalAmount;
}

int	Account::getNbDeposits(void)
{
	return _totalNbDeposits;
}

int	Account::getNbWithdrawals(void)
{
	return _totalNbWithdrawals;
}

void	Account::displayAccountsInfos(void)
{
	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::_nbAccounts;
	std::cout << ";total:" << Account::_totalAmount;
	std::cout << ";deposits:" << Account::_totalNbDeposits;
	std::cout << ";withdrawals:" << Account::_totalNbWithdrawals << std::endl;
}

void	Account::_displayTimestamp(void)
{
	time_t seconds = time(NULL);
	tm* timeinfo = localtime(&seconds);

	std::cout << "[";
	std::cout << timeinfo->tm_year + 1900;
	std::cout << (timeinfo->tm_mon + 1) / 10 << (timeinfo->tm_mon + 1) % 10;
	std::cout << (timeinfo->tm_mday) / 10 << (timeinfo->tm_mday) % 10;
	std::cout << "_";
	std::cout << (timeinfo->tm_hour) / 10 << (timeinfo->tm_hour) % 10;
	std::cout << (timeinfo->tm_min) / 10 << (timeinfo->tm_min) % 10;
	std::cout << (timeinfo->tm_sec) / 10 << (timeinfo->tm_sec) % 10;
	std::cout << "] ";
}

void	Account::displayStatus(void) const
{
	Account::_displayTimestamp();
	std::cout << "index:";
	std::cout << this->_accountIndex;
	std::cout << ";amount:" << this->_amount;
	std::cout << ";deposits:" << this->_nbDeposits;
	std::cout << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

int	Account::checkAmount(void) const
{
	return Account::_totalAmount;
}

void	Account::makeDeposit(int deposit)
{
	Account::_displayTimestamp();
	this->_nbDeposits += 1;
	std::cout << "index:";
	std::cout << this->_accountIndex;
	std::cout << ";p_amount:" << this->_amount;
	std::cout << ";deposit:" << deposit;
	this->_amount += deposit;
	std::cout << ";amount:" << this->_amount;
	Account::_totalAmount += deposit;
	std::cout << ";nb_deposits:" << this->_nbDeposits << std::endl;
	Account::_totalNbDeposits += 1;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	Account::_displayTimestamp();
	std::cout << "index:";
	std::cout << this->_accountIndex;
	std::cout << ";p_amount:" << this->_amount;
	std::cout << ";withdrawal:";
	if (this->_amount > withdrawal)
	{
		this->_nbWithdrawals++;
		std::cout << withdrawal;
		this->_amount -= withdrawal;
		Account::_totalAmount -= withdrawal;
		std::cout << ";amount:" << this->_amount;
		std::cout << ";nb_withdrawals:" << this->_nbWithdrawals;
		Account::_totalNbWithdrawals++;
		std::cout << std::endl;
		return (true);
	}
	std::cout << "refused";
	std::cout << std::endl;
	return false;
}

int Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;