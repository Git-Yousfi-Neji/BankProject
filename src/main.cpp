#include <iostream>
#include "AccountData/Account.h"
#include "AccountData/Transaction.h"
#include "AccessData/AccountDAOImpl.h"
#include "AccessData/TransactionDAOImpl.h"

using namespace std;

int main() {
    AccountDAOImpl accountDAO;
    TransactionDAOImpl transactionDAO;
    Account account("John Doe", 1000);
    accountDAO.createAccount(account);
    Transaction transaction("Deposit", 500); transactionDAO.createTransaction(account.getAccountNumber(), transaction);
    cout << "Current balance: " << account.getBalance() << endl;
    return 0;
}
