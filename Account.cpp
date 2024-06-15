#include "Account.h"
#include <string>
#include <iostream>

Account::Account()
{
    account_number = 0;
    account_name = "";
    balance = 0.0;
}

Account::Account(int account_number, std::string account_name, double balance)
{
    this->account_number = account_number;
    this->account_name = account_name;
    this->balance = balance;
}

void Account::deposit(double amount)
{
    balance += amount;
}

void Account::withdraw(double amount)
{
    if (balance - amount >= 0)
    {
        balance -= amount;
    }
    else
    {
        std::cout << "Insufficient funds." << std::endl;
    }
}

double Account::get_balance() const
{
    return balance;
}

void Account::display_account_info() const
{
    std::cout << "---------- ACCOUNT -------------" << std::endl;
    std::cout << "Account Name   :   " << account_name << std::endl;
    std::cout << "Account Number : # " << account_number << std::endl;
    std::cout << "Balance        : $ " << balance << std::endl;
    std::cout << "--------------------------------" << std::endl;
}