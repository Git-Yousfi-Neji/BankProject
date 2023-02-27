#ifndef ACCOUNT_DAO_IMPL_H
#define ACCOUNT_DAO_IMPL_H

#include <vector>
#include <stdexcept>
#include "AccountDAO.h"
#include "../AccountData/Account.h"

class AccountDAOImpl : public AccountDAO {
public:
    void createAccount(const Account& account) override ;
    Account retrieveAccount(const std::string& number)override ;
    void updateAccount(const Account& account)override ;
    void deleteAccount(const std::string& number)override ;
    std::vector<Account> retrieveAllAccounts();
};

#endif // ACCOUNT_DAO_IMPL_H
