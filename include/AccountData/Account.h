#ifndef ACCOUNT_H
#define ACCOUNT_H
#include "Transaction.h"

#include <string>
#include <vector>

class Transaction;

class Account {
public:
    Account(const std::string& holder_, double balance_);

    
    double getBalance() const;
    const std::vector<Transaction>& getTransactionHistory() const;

    void deposit(double amount);
    void withdraw(double amount);
    const std::string getHolder();
    int getAccountNumber();
    
    

private:
    int accountNumber_;
    double balance_;
    std::vector<Transaction> transactionHistory_;
    const std::string holder_;
};

#endif // ACCOUNT_H

