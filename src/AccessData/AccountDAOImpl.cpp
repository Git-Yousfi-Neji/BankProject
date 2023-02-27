#include "../../include/AccessData/AccountDAOImpl.h"
#include "../../include/AccountData/Account.h"

void AccountDAOImpl::createAccount(const Account& account) {
    // TODO: Implement createAccount method 
}

Account AccountDAOImpl::retrieveAccount(const std::string& number) {
    // TODO: Implement retrieveAccount method
    Account acc("Null", 12345678);
    return acc;
    
}

void AccountDAOImpl::updateAccount(const Account& account) {
    // TODO: Implement updateAccount method
    
}

void AccountDAOImpl::deleteAccount(const std::string& number) {
    // TODO: Implement deleteAccount method
    
}

std::vector<Account> AccountDAOImpl::retrieveAllAccounts() {
    // TODO: Implement retrieveAllAccounts method
    return std::vector<Account>();
}
