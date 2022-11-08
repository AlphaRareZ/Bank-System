#ifndef SAVINGSACCOUNT_H
#define SAVINGSACCOUNT_H
#include "BankApplication.h"
class SavingsAccount : public BankAccount{
private:
    string ID;
    long long balance;
public:
    void withdraw();
    void deposit();
};
#endif