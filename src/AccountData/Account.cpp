#include "../../include/AccountData/Account.h"
#include "../../include/AccountData/Transaction.h"
#include <stdexcept>



Account::Account(const std::string& holder, double balance) : holder_(holder), balance_(balance) {}



double Account::getBalance() const {
    return balance_;
}

const std::vector<Transaction>& Account::getTransactionHistory() const {
    return transactionHistory_;
}

void Account::deposit(double amount) {
    balance_ += amount;
    transactionHistory_.emplace_back("deposit", amount);
}

void Account::withdraw(double amount) {
    if (balance_ < amount) {
        throw std::runtime_error("insufficient funds");
    }
    balance_ -= amount;
    transactionHistory_.emplace_back("withdrawal", -amount);
}

const std::string Account::getHolder() { return holder_; }

int Account::getAccountNumber() {
        return accountNumber_;
    }
