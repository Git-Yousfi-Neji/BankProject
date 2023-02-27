#include "../../include/AccessData/TransactionDAOImpl.h"
#include "../../include/AccountData/Transaction.h"
#include "../../include/AccountData/Account.h"
#include "../../include/AccessData/AccountDAO.h"





//TransactionDAOImpl::TransactionDAOImpl() {}
 



void TransactionDAOImpl::createTransaction(int accountNumber, const Transaction& transaction) {
    // Retrieve the account with the specified account number
}

Transaction TransactionDAOImpl::retrieveTransaction(int id) {
    // TODO: Implement retrieveTransaction method
    Transaction t("Null", 0);
    return t;
}

std::vector<Transaction> TransactionDAOImpl::retrieveTransactionsForAccount(const std::string& accountNumber) {
    // TODO: Implement retrieveTransactionsForAccount method
    return std::vector<Transaction>();
}
