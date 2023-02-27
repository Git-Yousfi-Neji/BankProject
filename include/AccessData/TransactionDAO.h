#ifndef TRANSACTION_DAO_H
#define TRANSACTION_DAO_H

#include <vector>
#include "../AccountData/Transaction.h"

class TransactionDAO {
public:


    virtual void createTransaction(int accountNumber ,const Transaction& transaction) = 0;
    
    
    virtual Transaction retrieveTransaction(int id)=0;
    
    
    virtual std::vector<Transaction> retrieveTransactionsForAccount(const std::string& accountNumber) = 0;
};

#endif /* TRANSACTION_DAO_H */
