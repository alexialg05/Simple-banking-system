#include "Transaction.h"
#include <iostream>

Transaction::Transaction()
{
    sender_account = 0;
    receiver_account = 0;
    amount = 0.0;
}

Transaction::Transaction(int sender_account, int receiver_account, double amount)
{
    this->sender_account = sender_account;
    this->receiver_account = receiver_account;
    this->amount = amount;
}

void Transaction::proccess_transaction(Account &sender, Account &receiver, double amount)
{
    if (sender.get_balance() - amount >= 0)
    {
        sender.withdraw(amount);
        receiver.deposit(amount);
    }
    else
    {
        std::cout << "Insufficient funds." << std::endl;
    }
}

void Transaction::display_transaction_info() const
{
    std::cout << "--------- TRANSACTION ----------" << std::endl;
    std::cout << "Sender Account   : # " << sender_account << std::endl;
    std::cout << "Receiver Account : # " << receiver_account << std::endl;
    std::cout << "Amount           : $ " << amount << std::endl;
    std::cout << "--------------------------------" << std::endl;
}