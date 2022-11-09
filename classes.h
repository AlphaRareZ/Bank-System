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
    Client();

    void setType(string &type);

    void setID(string &id);

    void setBalance(long long inbalance);

    string getType();

    string getID();

    void basicWithdrawal();
    void basicDeposit();

    void savingsWithdrawal();
    void savingsDeposit();
    long long getBalance() const;

};

class BankAccount {
private:
    string ID;
    long long balance;
    Client *pClient{};
public:
    BankAccount();

    void withdraw();

    void deposit();

    void setID(string id);

    void setBalance(long long bankBalance);

    string getID();

    long long getBalance() const;

};

class SavingsAccount : public BankAccount {
private:
    string ID;
    long long balance{};
    Client *pClient{};
public:
    SavingsAccount();

    void withdraw();

    void deposit();

    void setID(string id);

    void setBalance(long long balance);

    string getID();

    long long getBalance();
};

#endif