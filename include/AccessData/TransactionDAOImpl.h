#ifndef TRANSACTION_DAO_IMPL_H
#define TRANSACTION_DAO_IMPL_H

#include <vector>
#include <stdexcept>
#include "TransactionDAO.h"
#include "AccountDAO.h"
#include "../AccountData/Transaction.h"



class TransactionDAOImpl : public TransactionDAO {
public:

//TransactionDAOImpl(AccountDAO acc);

    void createTransaction(int accountNumber ,const Transaction& transaction)override ;
    
    Transaction retrieveTransaction(int id)override ;
    
    std::vector<Transaction> retrieveTransactionsForAccount(const std::string& accountNumber)override ;
    
    private:
        //AccountDAO accountDAO_;
};

#endif // TRANSACTION_DAO_IMPL_H
