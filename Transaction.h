#ifndef TRANSACTION_H
#define TRANSACTION_H

#include <iostream>
#include <string>
#include "Account.h"


class Transaction
{
private:
    int sender_account;
    int receiver_account;
    double amount;
public:
    Transaction();
    Transaction(int sender_account, int receiver_account, double amount);
    void proccess_transaction(Account &sender, Account &receiver, double amount);
    void display_transaction_info() const;

};

#endif