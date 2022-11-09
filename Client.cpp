#include "AllClasses.h"

// constructor
Client::Client() {
    this->balance = 0;
    this->ID = "";
    this->type = "NULL";
}

// setters and getters
void Client::setType(string &type) {
    this->type = type;
}

void Client::setID(string &id) {
    this->ID = id;
}

void Client::setBalance(long long inbalance) {
    this->balance = inbalance;
}

string Client::getType() {
    return type;
}

long long Client::getBalance() const {
    return balance;
}

// Withdraw and deposit functions
void Client::basicWithdrawal() {
    BankAccount res;
    res.setBalance(balance);
    res.setID(ID);
    res.withdraw();
    pBankAccount = &res;
    this->balance = pBankAccount->getBalance();
}

void Client::basicDeposit() {
    BankAccount res;
    res.setBalance(balance);
    res.setID(ID);
    res.deposit();
    pBankAccount = &res;
    this->balance = pBankAccount->getBalance();
}

void Client::savingsWithdrawal() {
    SavingsAccount res;
    res.setBalance(balance);
    res.setID(ID);
    res.withdraw();
    pSavingsAccount = &res;
    this->balance = pSavingsAccount->getBalance();
}

void Client::savingsDeposit() {
    SavingsAccount res;
    res.setBalance(balance);
    res.setID(ID);
    res.deposit();
    pSavingsAccount = &res;
    this->balance = pSavingsAccount->getBalance();
}

// destructor
Client::~Client() = default;

