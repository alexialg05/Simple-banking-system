#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <string>

class Account
{
private:
int account_number;
std::string account_name;
double balance;

public:
    Account();
    Account(int account_number, std::string account_name, double balance);
    void deposit(double amount);
    void withdraw(double amount);
    double get_balance() const;
    void display_account_info() const;
};

#endif