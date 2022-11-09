#ifndef CLASSES_H
#define CLASSES_H

#include "bits/stdc++.h"

using namespace std;

// Declarations
class BankAccount;

class SavingsAccount;

class Client;

class BankApplication;

// Classes Prototypes
class BankApplication {
private:
    static vector<string> name;
    static vector<string> address;
    static vector<string> phone;
    static vector<string> type;
    static vector<string> balance;
    static vector<string> ID;
public:
    BankApplication();

    static void addClient();

    static void listClientsAndAccounts();

    static void withdrawMoney();

    static void depositMoney();

    // update data functions
    static void updateVectors();

    static void updateDatabase();

    // destructor
    ~BankApplication();

};

class Client {
private:
    string ID;
    long long balance;
    string type;
    BankAccount *pBankAccount{};
    SavingsAccount *pSavingsAccount{};

public:
    //constructor
    Client();

    // setters and getters
    void setType(string &type);

    void setID(string &id);

    void setBalance(long long inbalance);

    string getType();

    long long getBalance() const;

    // withdraw and deposit functions
    void basicWithdrawal();

    void basicDeposit();

    void savingsWithdrawal();

    void savingsDeposit();

    // destructor
    ~Client();

};

class BankAccount {
private:
    string ID;
    long long balance;
    Client *pClient{};
public:
    // constructor
    BankAccount();

    // setters and getters
    void setID(string id);

    void setBalance(long long bankBalance);

    long long getBalance() const;

    // withdraw and deposit functions
    void withdraw();

    void deposit();

    // destructor
    ~BankAccount();

};

class SavingsAccount : public BankAccount {
private:
    string ID;
    long long balance{};
    Client *pClient{};
public:
    // constructor
    SavingsAccount();

    // deposit and withdraw functions
    void withdraw();

    void deposit();

    //setters and getters
    void setID(string id);

    void setBalance(long long balance);

    long long getBalance();

    // destructor
    ~SavingsAccount();
};

#endif