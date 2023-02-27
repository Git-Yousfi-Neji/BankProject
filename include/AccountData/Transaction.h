#ifndef TRANSACTION_H
#define TRANSACTION_H

#include <string>

class Transaction {
public:
    Transaction(const std::string& type, double amount);

    const std::string& getType() const;
    double getAmount() const;
    int getId() const ;
    std::string getAccountNumber() const ;

private:
    std::string type_;
    double amount_;
    int id_;
    std::string accountNumber_;
};

#endif // TRANSACTION_H
