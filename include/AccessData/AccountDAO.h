#ifndef ACCOUNT_DAO_H
#define ACCOUNT_DAO_H

#include "../AccountData/Account.h"

class AccountDAO {
public:
    virtual void createAccount(const Account& account) = 0;
    virtual Account retrieveAccount(const std::string& accountNumber) = 0;
    virtual void updateAccount(const Account &account) = 0;
    virtual void deleteAccount(const std::string &number) = 0;
    virtual std::vector<Account> retrieveAllAccounts() = 0;
};

#endif /* ACCOUNT_DAO_H */
