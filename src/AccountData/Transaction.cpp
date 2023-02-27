#include "../../include/AccountData/Transaction.h"

Transaction::Transaction(const std::string& type, double amount)
    : type_(type), amount_(amount) {}

const std::string& Transaction::getType() const {
    return type_;
}

double Transaction::getAmount() const {
    return amount_;
}
int Transaction::getId() const {return id_;}
std::string Transaction::getAccountNumber() const {return accountNumber_;}
