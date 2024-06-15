#include <iostream>
#include <string>
#include "Account.h"
#include "Transaction.h"

int main()
{
    Account account1(123456, "John Doe", 1000.0);
    Account account2(654321, "Jane Doe", 500.0);

    account1.display_account_info();
    account2.display_account_info();
    Transaction transaction1(123456, 654321, 500.0);
    transaction1.proccess_transaction(account1, account2, 500.0);
    transaction1.display_transaction_info();
    account1.display_account_info();
    account2.display_account_info();
    Transaction transaction2(123456, 654321, 500.0);
    transaction1.proccess_transaction(account1, account2, 500.0);
    transaction1.display_transaction_info();
    account1.display_account_info();
    account2.display_account_info();
    

    return 0;
}